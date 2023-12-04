#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int cmp_part(const void *p, const void *q){
    return (*(int *)p - *(int *)q);
}
int main(){
    int n, i, j;
    int wins;
    int *enemies;
    int *soldiers;
    while(1){
        wins = 0;
        scanf("%d", &n);
        if(n == 0){
            return 0;
        }

        enemies = (int *)malloc(n * sizeof(int));
        soldiers = (int *)malloc(n * sizeof(int));
        for (i = 0; i < n; i++){
            scanf("%d", enemies + i);
        }
        for (j = 0; j < n; j++){
            scanf("%d", soldiers + j);
        }
        qsort(enemies, n, sizeof(int), cmp_part);
        qsort(soldiers, n, sizeof(int), cmp_part);

        for (i = 0, j = 0; i < n; i++){
            if(soldiers[i] > enemies[j]){
                j++;
                wins++;
            }
        }
        printf("%d\n", wins);
    }
    free(enemies);
    free(soldiers);
    return 0;
}
