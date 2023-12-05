#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[101];
    char a_word;
    int letter[26] = {0};   //'a'->0
    int i, letter_to_index;
    scanf("%s", str);
    for (i = 0; str[i] != '\0';i++){
        a_word = str[i];
        if(isalpha(a_word)){
            a_word = tolower(a_word);
            letter[a_word-'a']++;
        }
    }
    for (i = 0; i < 26; i++){
        printf("%d\n", letter[i]);
    }
    return 0;
}