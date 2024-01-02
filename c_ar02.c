#include <stdio.h>
#include <ctype.h>

int main(){
    int arr[6];
    int i;
    for (i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 5; i >= 0; i--) {
        if(i==0){
            printf("%d", arr[i]);
        }
        else{
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}