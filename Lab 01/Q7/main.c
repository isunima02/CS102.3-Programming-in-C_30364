#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,temp;
    printf("Enter the x value =");
    scanf("%d",&x);
    printf("Enter the y value =");
    scanf("%d",&y);
    temp=x;
    x=y;
    y=temp;
    printf("Now the x value is %d y value is %d",x,y);


    return 0;
}
