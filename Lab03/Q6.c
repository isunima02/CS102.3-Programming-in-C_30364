#include <stdio.h>
#include <stdlib.h>

int main()
{
        char uppercaseLetters[] = "ABC";
    char lowercaseLetters[] = "abc";
    char digits[] = "012";
    char specialSymbols[] = "$*+/ ";

    printf("Integer equivalents:\n");

    // Uppercase letters
    for (int i = 0; i < sizeof(uppercaseLetters) - 1; i++) {
        printf("%c: %d\n", uppercaseLetters[i], (int)uppercaseLetters[i]);
    }

    // Lowercase letters
    for (int i = 0; i < sizeof(lowercaseLetters) - 1; i++) {
        printf("%c: %d\n", lowercaseLetters[i], (int)lowercaseLetters[i]);
    }

    // Digits
    for (int i = 0; i < sizeof(digits) - 1; i++) {
        printf("%c: %d\n", digits[i], (int)digits[i]);
    }

    // Special symbols
    for (int i = 0; i < sizeof(specialSymbols) - 1; i++) {
        printf("%c: %d\n", specialSymbols[i], (int)specialSymbols[i]);
    }

    return 0;
}
