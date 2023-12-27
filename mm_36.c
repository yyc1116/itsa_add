#include <stdio.h> 
#include<stdlib.h>

int isPrime(int num){
    int j;
    if(num <= 1){
        return 0;
    }
    for (j = 2; j * j <= num; j++) {
        if (num % j == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main(){
    int n, count, i;
    while(1){
        scanf("%d", &n);
        if (n == 0) {
            break; // End of input
        }
        count = 0;
        for (i = 2; i < n; i++){
            if(isPrime(i)){
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}