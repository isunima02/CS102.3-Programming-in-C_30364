#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,fact=1,number;
    printf("enter number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        fact=fact*i;
}
  printf("factorial of %d is %d",number,fact);

    return 0;
}
