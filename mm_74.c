#include <stdio.h> 

int main(){
    int i, sum = 0;
    int lower, upper;
    scanf("%d %d", &lower, &upper);
    for(i=lower; i<=upper; i++){
        if(i%2==1) sum += i;    
    }
    printf("%d\n", sum);
    return 0;
}
