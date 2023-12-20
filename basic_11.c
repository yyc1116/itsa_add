#include <stdio.h> 

int main(){
    int i, j, row, col;
    scanf("%d %d", &row, &col);
    int matrix[row*col];

    for (i = 0; i < (row*col); i++){
        scanf("%d", &matrix[i]);
    }
    for (i = 0; i < col; i++){
        for (j = 0; j < row; j++){
            if(j == (row-1)){
                printf("%d", matrix[j*col+i]);
            }
            else{
                printf("%d ", matrix[j*col+i]);
            }
        }
        printf("\n");
    }
    return 0;
}