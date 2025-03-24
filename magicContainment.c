//
//  main.c
//  magicContainment
//
//  Created by Akin Korkmaz on 10/20/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void quickSort(double * arr, int len) {
    
    if (len <= 1)
        return;
    
    double pivot = arr[0];
    
    int fptr = 1;
    int bptr = len-1;
    for (int i = 0; i < len-1; i++) {
        if (arr[fptr] < pivot) {
            // into smaller
            fptr++;
        } else {
            // into greater
            double tmp = arr[fptr];
            arr[fptr] = arr[bptr];
            arr[bptr] = tmp;
            bptr--;
        }
    }
    // Swap the pivot with last of smaller partition
    double tmp = arr[0];
    arr[0] = arr[fptr-1];
    arr[fptr-1] = tmp;
    // Sorting the smaller partition
    quickSort(arr, fptr - 1);
    // Sorting the greater partition
    quickSort(arr + fptr, len - fptr);
}

int main(int argc, const char * argv[]) {
    
    int moteN = 0;
    int deviceN = 0;
    double res = 0;
    
    //gets the array size
    scanf("%d", &moteN);
    scanf("%d", &deviceN);
    
    //allocates memmory for arrays
    double * moteVol = (double*) calloc(moteN, sizeof(double));
    double * deviceVol = (double*) calloc(deviceN, sizeof(double));
    
    //Variables
    int moteRadii = 0;
    int deviceDimensions[3] = {0,0,0};
    
    //gets the mote Radius and calculates the Volume
    for (int i = 0; i < moteN; i++) {
        scanf("%d", &moteRadii);
        moteVol[i] =  1.33333333 * M_PI * (moteRadii*moteRadii*moteRadii);
    }
    
    //gets the dimensions and calculates each device volume
    for (int i = 0; i < deviceN; i++) {
        scanf("%d %d %d", &deviceDimensions[0],&deviceDimensions[1],&deviceDimensions[2]);
        deviceVol[i] = deviceDimensions[0] * deviceDimensions[1] * deviceDimensions[2];
    }
    
    //Sorts Both Arrays
    quickSort(moteVol, moteN);
    quickSort(deviceVol, deviceN);
    
    int flag = 0;
    //flags the index in the sorted array where motes cannot fit into the device
    for (int i = 0; i < moteN; i++) {
        for (int j = 0; j < deviceN; j++) {
            if (moteVol[i] < deviceVol[j]) {
                flag = i;
            }
        }
    }
    //if all devices are full
    if (flag == moteN - 1) {
        printf("0.000000");
        return 0;
    }else{ //or add together all of the other mote Volumes in the array
        while (flag != moteN-1) {
            flag++;
            res += moteVol[flag];
        }
    }
    //prints the result
    printf("%f", res);
    //free memmory
    free(moteVol);
    free(deviceVol);
    
    
    return 0;
}
