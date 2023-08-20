#include <stdio.h>
#define ROWS 3
#define COLS 3 

void inputmatrix(int matrix[][COLS],int rows,int cols);
void printmatrix(int matrix[][COLS],int rows,int cols);
int main() {
    
 int matrix[ROWS][COLS];
 inputmatrix(matrix,ROWS,COLS);
printf("The Matrix Elements is  \n");
 printmatrix(matrix,ROWS,COLS);
    return 0;
}



void inputmatrix(int matrix[][COLS],int rows,int cols){
    
    for(int i = 0 ; i<rows ; i++){
        for(int j = 0 ; j<cols ; j++){
            scanf("%d",*(matrix+i)+j);
        }
    }
}

void printmatrix(int (*matrix)[COLS], int rows, int cols){
//void printmatrix(int *(matrix)[COLS],int rows,int cols){
    for(int i = 0 ; i< rows ; i++){
        for (int j = 0; j<cols ; j ++){
            printf("%d",*(*(matrix+i)+j));
        }
        printf("\n");
    }
}