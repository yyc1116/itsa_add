#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    int i, flag = 1, length = 0;
    scanf("%s", str);
    for (i = 0; i < strlen(str) / 2; i++){
        if(str[i] != str[strlen(str)-i-1]){
            flag = 0;
            break;
        }
    }

    if (flag == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}