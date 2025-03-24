//
//  main.c
//  spellconstruction
//
//  Created by Akin Korkmaz on 10/7/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// ***Function Declarations***
void readBlocks(void);
void checkIfAnySame(void);

bool * inputBlocksVisited = NULL;
char ** inputBlocks = NULL;
int xMany = 0;
int xLong = 0;
//false left true right
bool leftOrRight = false;

void checkRest(int index1, int index2, char * final, char * block, int * count){
    
    if (index1 < 0 || index2 < 0) {
        return;
    }
    
    if (final[index1] == block[index2]) {
        (*count)++;
        checkRest(index1 - 1, index2 - 1, final, block, count);
    }else{
        return;
    }
    
    
}

void checkOverlap(char * final, char * block){
    int count = 0;
    int LargestOverlap = 0;
    //left
    for (int i = 0; i < xLong - 1; i++) {
        if(final[strlen(final) - 1] == block[i]){
            count++;
            checkRest((int)strlen(final) - 2, i - 1, final, block, &count);
        }
        if (LargestOverlap < count) {
            LargestOverlap = count;
            leftOrRight = false;
        }
    }
    
    
    
    //right
    for (int i = 0; i < strlen(final) - 1; i++) {
        if (block[xLong - 1] == final[i]) {
            count++;
            checkRest(xLong - 2, i - 1, final, block, &count);
        }
        if (LargestOverlap < count) {
            LargestOverlap = count;
            leftOrRight = true;

        }
    }
    
    return;
}

int main(void) {
    

    
    //gets all the required information from the panel input
    readBlocks();
    //check wheather any block in the array is equal to eachother ,
    //and rebuild the array also adjust the xMany count for keeping track of the amount of blocks present
    checkIfAnySame();
    

    
    
    
    for (int i = 0;i < xMany; i++) {
        printf("%s ", inputBlocks[i]);
    }
    
    //use strncat((front)str1, (end)str2, amount to add from begining of str2 to the end of str1)
    
    
    
    
    
    
    
    return 0;
}

void readBlocks(void) {
    scanf("%d", &xMany);
    scanf("%d", &xLong);
    
    inputBlocksVisited = (bool *) calloc(xMany, sizeof(bool));
    inputBlocks = (char **) calloc(xMany, sizeof(char*));
    
    for (int i = 0; i < xMany; i++) {
        // Allocate enough memory for xLong characters + 1 for the null terminator
        inputBlocks[i] = (char*) malloc((xLong + 1) * sizeof(char));
        
        // Read the string and ensure it's null-terminated
        scanf("%s", inputBlocks[i]);
        
        // Optionally, check that the string length doesn't exceed xLong
        if (strlen(inputBlocks[i]) > xLong) {
            printf("Error: input block length exceeds allocated size.\n");
            exit(1);
        }
    }
}


void checkIfAnySame(void) {
    int flag = 0;

    // Check for duplicates
    for (int i = 0; i < xMany; i++) {
        if (inputBlocks[i] == NULL) continue;  // Skip NULL entries
        
        for (int j = i + 1; j < xMany; j++) {
            if (inputBlocks[j] != NULL && strcmp(inputBlocks[i], inputBlocks[j]) == 0) {
                free(inputBlocks[j]);  // Free the memory for the duplicate block
                inputBlocks[j] = NULL; // Mark it as NULL
            }
        }
    }

    // Rebuild the array without NULL elements
    for (int i = 0; i < xMany; i++) {
        if (inputBlocks[i] == NULL) {
            flag++;
        } else if (flag > 0) {
            // Shift non-null entries to remove the null entries
            inputBlocks[i - flag] = inputBlocks[i];
        }
    }

    // Resize the inputBlocks array to the new size after removing duplicates
    xMany -= flag;
    inputBlocks = realloc(inputBlocks, xMany * sizeof(char*));

}
