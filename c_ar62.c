#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int rowA, colA;
    int rowB, colB;
    int i, j, k;

    scanf("%d %d", &rowA, &colA);
    int matrixA[rowA][colA];
    for (i = 0; i < rowA; i++) {
        for (j = 0; j < colA; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    scanf("%d %d", &rowB, &colB);
    int matrixB[rowB][colB];
    for (i = 0; i < rowB; i++) {
        for (j = 0; j < colB; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    int result[rowA][colB];
    for (i = 0; i < rowA; i++) {
        for (j = 0; j < colB; j++) {
            result[i][j] = 0;
            for (k = 0; k < colA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    for (i = 0; i < rowA; i++) {
        for (j = 0; j < colB; j++) {
            if(j == colB-1){
                printf("%d", result[i][j]); 
            }
            else{
                printf("%d ", result[i][j]);        
            }
        }
        printf("\n");
    }
    return 0;
}