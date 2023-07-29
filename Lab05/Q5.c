#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,reverse=0,reminder;
    printf("enter a number");
    scanf("%d",&n);
    do
    {
        r=n%10;
        reverse=reverse*10+reminder;
        n/=10;
    }while(n!=0);
    printf("reverse number %d",reverse)

    return 0;
}
