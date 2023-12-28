#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp_part(const void *p, const void *q){
    return (*(int *)p - *(int *)q);
}

int main() {
    int i, j, nCase, size;
    scanf("%d", &nCase);

    for (i = 0; i < nCase; i++){
        scanf("%d", &size);
        int arr[size * 2];
        for (j = 0; j < size * 2; j++){
            scanf("%d", &arr[j]);
        }

        qsort(arr, size * 2, sizeof(int), cmp_part);
        printf("%d\n", arr[size-1]);
    }
    
    return 0;
}