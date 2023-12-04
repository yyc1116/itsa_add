#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int a, b, i;
    int gcd_result;
    scanf("%d %d", &a, &b);
    for (i = 1; a >= i && b >= i; i++){
        if ((a % i == 0) && (b % i == 0)){
            gcd_result = i;
        }
    }
    printf("%d\n", gcd_result);
    return 0;
}