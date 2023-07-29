#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,largest;
    printf("Enter two numbers \n");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        printf("largest number is %d",n1);
    }
    else
    {
        printf("largest number is %d",n2);
    }

    return 0;
}
