//
//  main.c
//  Magic Leak Detection
//
//  Created by Akin Korkmaz on 9/18/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

char Zone[40] = "0123456789qwertyuiopasdfghjklzxcvbnm";

typedef struct board board;
typedef struct Node Node;
typedef struct linkedList linkedList;
typedef struct Queue queue;
typedef struct point point;


struct point {
    long long xPos;
    long long yPos;
};

struct Node {
    point value;
    Node * next;
};

struct linkedList {
    Node * head;
    Node * tail;
};

struct Queue {
    linkedList * LL;
};

struct board {
    char * arr;
};






long long magicpaircalculation(long long pairs);
board * InitBoard(board * inputRune,long long rows, long long column);

Node * createNode(point value);
void addTail(linkedList * linkedList, point value);
void removeHead(linkedList * linkedList);

point getfirst(queue * que);
void enqueue(queue * que, point value);
void dequeue(queue * que);


void floodFill(board * board, long long regionCount,long long dotPerRegion[40], point point, queue * que, long long rows,long long column){
    
    if (que->LL->head != NULL) {
        dequeue(que);
    }

    struct point newpoint = {0,0};
    if (board[point.xPos].arr[point.yPos] != Zone[regionCount-1]) {
        board[point.xPos].arr[point.yPos] = Zone[regionCount-1];
        dotPerRegion[regionCount-1]++;
    }
    
    
        if (point.xPos < rows - 1 && board[point.xPos+1].arr[point.yPos] == '.') {
            newpoint.xPos = point.xPos+1;
            newpoint.yPos = point.yPos;
            enqueue(que, newpoint);
        }
    
        if (point.xPos != 0 && board[point.xPos-1].arr[point.yPos] == '.') {
            newpoint.xPos = point.xPos-1;
            newpoint.yPos = point.yPos;
            enqueue(que, newpoint);
        }
        if (point.yPos != 0 && board[point.xPos].arr[point.yPos-1] == '.') {
            newpoint.xPos = point.xPos;
            newpoint.yPos = point.yPos-1;
            enqueue(que, newpoint);
        }
    
    
    
        if (point.yPos < column - 1 && board[point.xPos].arr[point.yPos+1] == '.') {
            newpoint.xPos = point.xPos;
            newpoint.yPos = point.yPos+1;
            enqueue(que, newpoint);
        }
    
        
    
    
    if (que->LL->head == NULL) {
        return;
    }
    floodFill(board, regionCount, dotPerRegion, getfirst(que), que, rows,column);
}

int main(int argc, const char * argv[]) {

    ///------------------------
    ///       #Variables#
    ///------------------------
    long long finalResult = 0;
    long long XaroundMagic = 0;
    long long XaroundMagicMax = 0;
    int xcount = 0;
    bool visitedZone[40] = {false};
    bool visitedMAXZone[40] = {false};
    long long aroundX[4] = {0,0,0,0};
    int index[4] = {0,0,0,0};
    int temp[4] = {0,0,0,0};
    long long pairs;
    long long rows = 0;
    long long column = 0;
    point point = {0,0};
    queue * que = (queue*) malloc(sizeof(queue));
    que->LL = (linkedList*) malloc(sizeof(linkedList));
    int RegionCount = 1;
    long long dotPerRegion[40] = {0};
    board * inputRune = NULL;
    ///------------------------
    
    
    ///--------------------------------------------
    ///       #Initialization and Get Board#
    ///--------------------------------------------

    //step 1 - get the dimensions of the rune
    scanf("%llu", &rows);
    scanf("%llu", &column);
    
    //step 2 - initialize the board
    //memorry allocation and setting all char values to #
    inputRune = InitBoard(inputRune,rows,column);
    
    //consumes the last \n char from the last scanf input
    getchar();
    
    //step 3 - get the board input from the console
    for (int i = 0; i < rows; i++) {
        fgets(inputRune[i].arr, (int)column + 2, stdin);
    }
    ///--------------------------------------------
    
    
    ///--------------------------------------------------------
    ///       #Fill All Regions with ZoneID[index] array#
    ///--------------------------------------------------------
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            
            if (inputRune[i].arr[j] == '#') {
                continue;
            }
            
            if (inputRune[i].arr[j] == '.') {
                
                point.xPos = i;
                point.yPos = j;
                
                //calls floodfill function for the . found
                floodFill(inputRune, RegionCount, dotPerRegion, point, que,rows,column);
                
                RegionCount++;
            }
            
            
        }
    }

    
    ///-----------------------------------------------------------
    ///       #Finds the Number of X's with their Cordinates#
    ///-----------------------------------------------------------
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            if (inputRune[i].arr[j] == 'X') {
                xcount++;
                aroundX[0] = 0;
                aroundX[1] = 0;
                aroundX[2] = 0;
                aroundX[3] = 0;
            
                
                for (int x = 0; x < RegionCount - 1; x++) {
                    if (j < column - 1 && inputRune[i].arr[j + 1] == Zone[x] && visitedZone[x] == false ) {
                        aroundX[0] = dotPerRegion[x];
                        temp[0] = x;
                        visitedZone[x] = true;
                    }
                }
                for (int x = 0; x < RegionCount - 1; x++) {
                    if (j != 0 && inputRune[i].arr[j - 1] == Zone[x] && visitedZone[x] == false ) {
                        aroundX[1] = dotPerRegion[x];
                        temp[1] = x;
                        visitedZone[x] = true;
                    }
                }
                for (int x = 0; x < RegionCount - 1; x++) {
                    if (i != 0 && inputRune[i - 1].arr[j] == Zone[x] && visitedZone[x] == false ) {
                        aroundX[2] = dotPerRegion[x];
                        temp[2] = x;
                        visitedZone[x] = true;
                    }
                }
                for (int x = 0; x < RegionCount - 1; x++) {
                    if (i < rows - 1 && inputRune[i + 1].arr[j] == Zone[x] && visitedZone[x] == false ) {
                        aroundX[3] = dotPerRegion[x];
                        temp[3] = x;
                        visitedZone[x] = true;
                    }
                }
                
                pairs = aroundX[0]+aroundX[1]+aroundX[2]+aroundX[3] + 1;
                
                XaroundMagic = magicpaircalculation(pairs);
                
                if (XaroundMagic > XaroundMagicMax) {
                    XaroundMagicMax = XaroundMagic;
                    index[0] = temp[0];
                    index[1] = temp[1];
                    index[2] = temp[2];
                    index[3] = temp[3];
                    
                    for (int y = 0; y < 40; y++) {
                        visitedMAXZone[y] = visitedZone[y];
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < RegionCount; i++) {
        if ((i != index[0] && visitedMAXZone[i] == false) || (i != index[1] && visitedMAXZone[i] == false) || (i != index[2] && visitedMAXZone[i] == false) || (i != index[3] && visitedMAXZone[i] == false)) {
            finalResult += magicpaircalculation(dotPerRegion[i]);
        }
    }
    
    ///-----------------------------------------------------------
    ///       #Frees all allocations#
    ///-----------------------------------------------------------
    for (int i = 0; i < rows; i++) {
        free(inputRune[i].arr);
    }
    
    free(inputRune);
    free(que->LL);
    free(que);
    ///-----------------------------------------------------------
    
    
    printf("%llu", finalResult + XaroundMagicMax);
    
    return 0;
}

//calculates the magic amount for pairs number of connections
long long magicpaircalculation(long long pairs){ 
    return pairs * (pairs + 1) / 2;
}

//function to allocate memmory and initialize the values of the board
board * InitBoard(board * inputRune, long long rows, long long column){
    //allocates a array with rows number of size.
    inputRune = (board*) calloc(rows, sizeof(board));
    
    //allocates each string in the other array to create a 2D string array
    for (int i = 0; i < rows; i++) {
        inputRune[i].arr = (char*) calloc(column + 2,sizeof(inputRune[i].arr));
    }
    
    //initializes all values to #
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            inputRune[i].arr[j] = '#';
        }
    }
    
    //returns the initialized rune
    return inputRune;
}

Node * createNode(point value){
    Node * newNode = (Node*) malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    
    return newNode;
}

void addTail(linkedList * linkedList, point value){
    Node * newTail = createNode(value);
    if (linkedList ->head == NULL){
        linkedList->tail = NULL;
        linkedList->head = linkedList->tail = newTail;
        return;
    }
    
    linkedList->tail->next = newTail;
    linkedList->tail = newTail;
}

void removeHead(linkedList * linkedList){
    if (linkedList->head == NULL) {
        return;
    }
    
    if (linkedList->head->next == NULL) {
        free(linkedList->head);
        linkedList->head = linkedList->tail = NULL;
        return;
    }
    
    Node * newHead = linkedList->head->next;
    free(linkedList->head);
    linkedList->head = newHead;
}

point getfirst(queue * que){
    return que->LL->head->value;
}

void enqueue(queue * que, point value){
    addTail(que->LL, value);
}

void dequeue(queue * que){
    removeHead(que->LL);
}
