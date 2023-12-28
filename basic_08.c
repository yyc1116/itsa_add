#include <stdio.h> 
#include<stdlib.h>

int isPrime(int num){
    int j;
    if(num <= 1){
        return 0;
    }
    for (j = 2; j * j <= num; j++) {        //因數 對稱, 做一半就行(找一半因數)
        if (num % j == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main(){
    int n;
    
    scanf("%d", &n);
    if (isPrime(n)) {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}