#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH];
    char lowercase;
    int index;
    int letterCount[26] = {0};  // 26個字母的計數器

    // 讀取一行文字
    fgets(input, sizeof(input), stdin);

    int i = 0;
    int wordCount = 0;
    int insideWord = 0;  // 用來標記是否在字中

    while (input[i] != '\0'){
        if (isalpha(input[i])){
            // 將字母轉換成小寫
            lowercase = tolower(input[i]);
            index = lowercase - 'a';
            letterCount[index]++;

            // 如果不在字中，表示進入一個新字
            if (!insideWord){
                wordCount++;
                insideWord = 1;
            }
        } 
        else{
            // 遇到非字母的字符表示字結束
            insideWord = 0;
        }
        i++;
    }

    printf("%d\n", wordCount);
    for (int j = 0; j < 26; j++){
        if (letterCount[j] > 0){
            printf("%c : %d\n", 'a' + j, letterCount[j]);
        }
    }
    return 0;
}
