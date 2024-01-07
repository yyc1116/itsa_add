#include <stdio.h>
#include <stdlib.h>

int main(){
    int start, end;
    int tmp, i, total = 0;
    scanf("%d %d", &start, &end);
    if(start>end){
        tmp = start;
        start = end;
        end = tmp;
    }
    for (i = start; i <= end; i++) {
        total += i;
    }
    printf("%d\n", total);
    return 0;
}
