#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter integer num");
    scanf("%d",&num);
    if((num%2)==0)
        printf("%d is even number",num);
    else
        printf("%d is odd number",num);
 return 0;
}

int main()
{
    int m;
    printf("Enter a number");
    scanf("%d",&m);
    switch(m%2){
    case 0:printf("%d even number",m);break;
    case 1:printf("%d odd number",m);break;
    }

    return 0;
}
