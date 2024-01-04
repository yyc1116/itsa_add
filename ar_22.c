#include <stdio.h>
#include <string.h>

// void encrypt(char *str) {
//     int len = strlen(str);
//     for (int i = 0; i < len; i++) {
//         str[i] = str[i] + 3;
//     }
// }
// Function to decrypt the string by adding 3 to each character's ASCII value
void decrypt(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] = str[i] - 3;
    }
}

int main() {
    char input[100]; // Assuming maximum input size of 100 characters

    scanf("%s", input);

    // Decrypt the encrypted string
    decrypt(input);
    printf("%s\n", input);

    return 0;
}
