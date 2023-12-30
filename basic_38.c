#include <stdio.h>
#include <stdlib.h>

int func(int num){
    if((num == 0)||(num == 1)){
        return num + 1;
    }
    else{
        return func(num - 1) + func(num/2);
    }
}

int main(){
    int integer = 0;
    scanf("%d", &integer);
    printf("%d\n", func(integer));
    return 0;
}