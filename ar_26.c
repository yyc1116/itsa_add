#include<stdio.h>
#include<stdlib.h>

int main(){
    int mClass, nStudents;
    int i, j;
    int boys = 0, girls = 0;

    scanf("%d %d",&mClass, &nStudents);
    int wholeClass[nStudents];

    for (i = 0; i < mClass; i++){
        for (j = 0; j < nStudents; j++){
            scanf("%d",&wholeClass[j]);
        }
        for (j = 0; j < nStudents; j++){
            if(wholeClass[j]==0){
                girls += 1;
            }
            else{
                boys += 1;
            }
        }   
    }

    if(girls > boys){
        printf("0\n");
    }
    else if(girls < boys){
        printf("1\n");
    }
    else{
        printf("2\n");
    }
    return 0;
}