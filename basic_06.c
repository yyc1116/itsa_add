#include<stdio.h>

int main(){
    int month;
    scanf("%d", &month);
    switch(month){
        case 3 ... 5:
            printf("Spring\n");
            break;
        case 6 ... 8:
            printf("Summer\n");
            break;
        case 9 ... 11:
            printf("Autumn\n");
            break;
        default :
            printf("Winter\n");
            break;
    }
    return 0;
}