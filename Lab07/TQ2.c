#include <stdio.h>
#include <stdlib.h>


   void calculatesd(int num1, int num2) {
    int sum = num1 + num2;
    int difference = num1 - num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: \n");
    scanf("%d %d", &num1,&num2);
    calculatesd(num1, num2);
}


