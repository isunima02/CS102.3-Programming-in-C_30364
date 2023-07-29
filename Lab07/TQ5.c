#include <stdio.h>
#include <stdlib.h>


    void calculateAndDisplaySum() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
}

int main() {
    int timesToCall;

    printf("How many times do you want to calculate the sum? ");
    scanf("%d", &timesToCall);

    for (int i = 0; i < timesToCall; i++) {
        printf("\nCalculation %d:\n", i + 1);
        calculateAndDisplaySum();
    }

    return 0;
}
