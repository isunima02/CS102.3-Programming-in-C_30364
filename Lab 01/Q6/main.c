#include <stdio.h>
#include <stdlib.h>

int main()
{
    int byear,age;
    char z[20];
    printf("Enter your name=");
    scanf("%s",&z);
    printf("Enter your birth year=");
    scanf("%d",&byear);
    age=2023-byear;
    printf("Your age is %d",age);

    return 0;
}
