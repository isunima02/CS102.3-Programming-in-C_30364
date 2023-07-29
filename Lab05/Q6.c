#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exp, result;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);
    result = pow(base, exp);
    printf("%d^%d = %d", base, exp, result);

        return 0;
}
