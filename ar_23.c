#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char input_line[1000], tmp, delta;
    int i;

    fgets(input_line, 1000, stdin);
    for (i = 0; input_line[i] != '\0'; i++){
        tmp = input_line[i];
        if(isalpha(tmp)){
            if(isupper(tmp)){
                delta = tmp - 'A';
                tmp = 'A' + (delta + 13) % 26;
            }
            else if(islower(tmp)){
                delta = tmp - 'a';
                tmp = 'a' + (delta + 13) % 26;
            }
        }
        printf("%c", tmp);
    }
    printf("\n");
    return 0;
}