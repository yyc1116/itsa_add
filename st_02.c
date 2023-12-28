#include <stdio.h>
#include <string.h>
#include <math.h>

int excelColumnToInt(char *column) {
    int result = 0;
    int length = strlen(column);
    int i;

    for (i = 0; i < length; i++) {
        result += (column[i] - 'A' + 1) * pow(26, length - i - 1);
    }

    return result;
}

int main() {
    char column[100];

    // Read input until EOF
    while (scanf("%s", column) != EOF) {
        int result = excelColumnToInt(column);
        printf("%d\n", result);
    }

    return 0;
}
// for (i = 0; i < text[i]!='\0'; i++){
//     result = (text[i] - 'A') + 1 + result * 26;
// }