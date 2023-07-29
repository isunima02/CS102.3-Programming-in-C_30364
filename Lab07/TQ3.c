#include <stdio.h>
#include <stdlib.h>

int calculateProduct(int num1, int num2) {
    int product = num1 * num2;
    return product;
}

int main() {
    int num1, num2;

    printf("Enter the first whole number: ");
    scanf("%d", &num1);

    printf("Enter the second whole number: ");
    scanf("%d", &num2);

    int result = calculateProduct(num1, num2);
    printf("Product: %d\n", result);

    return 0;
}


