#include <stdio.h>
#include <stdlib.h>

    double calculatep(int num1, float num2) {
    double product = num1 * num2;
    return product;
}

int main() {
    int intV;
    float floatV;

    printf("Enter an integer value: ");
    scanf("%d", &intV);

    printf("Enter a float value: ");
    scanf("%f", &floatV);

    double result = calculatep(intV, floatV);
    printf("Product: %lf\n", result);

    return 0;
}

