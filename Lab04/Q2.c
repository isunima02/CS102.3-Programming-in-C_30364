#include <stdio.h>
#include <stdlib.h>

int main()
{
        float num1,num2,result;
    int choice;
    printf("menu:\n");
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    printf("Enter two numbers:\n");
    scanf("%f %f",&num1,&num2);
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
