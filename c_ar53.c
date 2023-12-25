#include <stdio.h> 
#include <stdlib.h>

int cmp_part(const void *p, const void *q){
    return (*(int *)p - *(int *)q);
}

int main(){
    int nStudents, i;
    int grades[101];

    scanf("%d", &nStudents);
    for (i = 0; i < nStudents; i++){
        scanf("%d", &grades[i]);
    }
    qsort(grades, nStudents, sizeof(int), cmp_part);
    
    for (i = 0; i < nStudents; i++){
        printf("%d\n", grades[i]);
    }
    return 0;
}