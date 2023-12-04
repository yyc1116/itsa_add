#include<stdio.h>
#include<stdlib.h>

int main(){
    int src, i;
    int bin[8];
    scanf("%d", &src);
    if(src<0){
        src += 256;     //負數則推移至正整數
    }
    for (i = 7; i >= 0; i--){
        bin[i] = src % 2;
        src /= 2;
    }

    for (i = 0; i < 8; i++){
        if(i == 7){
            printf("%d\n", bin[i]);
        }
        else{
            printf("%d", bin[i]);
        }
        
    }
    return 0;
}