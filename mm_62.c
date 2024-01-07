#include <stdio.h>
#include <stdlib.h>

// Function to convert digit to decimal value
int digitToDecimal(char digit, int base) {
    if (digit >= '0' && digit <= '9') {
        return digit - '0';
    } 
    // else if (digit >= 'A' && digit <= 'F') {
    //     return 10 + digit - 'A';
    // } 
    else if (digit >= 'a' && digit <= 'f') {
        return 10 + digit - 'a';
    } 
    else {
        printf("Invalid input digit: %c\n", digit);
        exit(1);
    }
}

// Function to convert decimal value to digit
char decimalToDigit(int value) {
    if (value >= 0 && value <= 9) {
        return value + '0';
    } else {
        return value - 10 + 'a';
    }
}

// Function to convert number from one base to another
void convertNumber(int inputBase, char* inputDigits, int outputBase, int numOfDigits) {
    long long int decimalValue = 0;
    int i, j;

    // Convert input number to decimal
    for (i = 0; i < numOfDigits; i++) {
        decimalValue = decimalValue * inputBase + digitToDecimal(inputDigits[i], inputBase);
    }

    char outputDigits[100]; // Assuming maximum output size

    // Convert decimal to output base
    i = 0;
    while (decimalValue > 0) {
        outputDigits[i++] = decimalToDigit(decimalValue % outputBase);
        decimalValue /= outputBase;
    }

    // Output converted number in reverse order
    // printf("Converted number: ");
    for (j = i - 1; j >= 0; j--) {
        if(j != 0){
            printf("%c ", outputDigits[j]);
        }
        else{
            printf("%c", outputDigits[j]);
        }
    }
    printf("\n");
}

int main() {
    int inputBase, outputBase, numOfDigits;
    char inputDigits[100];

    //printf("Enter input format, number of digits, input digits, and output format: ");
    scanf("%d %d ", &inputBase, &numOfDigits);
    for (int i = 0; i < numOfDigits; i++) {
        scanf("%c ", &inputDigits[i]);
    }
    scanf("%d", &outputBase);

    convertNumber(inputBase, inputDigits, outputBase, numOfDigits);

    return 0;
}
