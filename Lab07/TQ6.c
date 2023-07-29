#include <stdio.h>
#include <stdlib.h>


   void display(int num1, int num2) {
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    printf("Sum: %d, Difference: %d, Product: %d\n", sum, difference, product);
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1,&num2 );
    display(num1, num2);

    return 0;
}





