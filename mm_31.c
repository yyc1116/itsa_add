#include <stdio.h> 
#include <stdlib.h>

int main(){
    int nCase, fNum;
    int result = 1;
    int i, j;
    scanf("%d", &nCase);
    for (i = 0; i < nCase; i++){
        scanf("%d", &fNum);
        for (j = 1; j <= fNum; j++){
            result = result*j;
        }
        printf("%d\n", result);
        result = 1;
    }

        return 0;
}
