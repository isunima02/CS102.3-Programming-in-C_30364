#include <stdio.h>
#include <stdlib.h>


    int calculateQ(int num1, int num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }

    int quotient = num1 / num2;
    return quotient;
}

int main() {
    int num1, num2;

    printf("Enter the first whole number: ");
    scanf("%d", &num1);

    printf("Enter the second whole number: ");
    scanf("%d", &num2);

    int result = calculateQ(num1, num2);
    printf("Quotient: %d\n", result);

    return 0;
}
