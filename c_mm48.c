#include <stdio.h>
#include <stdlib.h>

int f91(int n){
    if(n<=100){
        return f91(f91(n + 11));
    }
    else if(n>=101){
        return (n - 10);
    }
}
int main(){
    int nCase;
    int num, i;
    int result;
    scanf("%d", &nCase);
    for (i = 0; i < nCase;i++){
        scanf("%d", &num);
        result = f91(num);
        printf("%d\n", result);
    }
    return 0;
}