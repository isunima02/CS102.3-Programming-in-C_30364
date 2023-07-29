#include <stdio.h>
#include <stdlib.h>

void displaysd()
{
    int n1,n2,sum,diff;
    printf("Enter two numbers-");
    scanf("%d %d",&n1,&n2);
    sum=n1+n2;
    diff=n1-n2;
    printf("The sum is %d \n",sum);
    printf("The difference is %d ",diff);
}

int main()
{
    displaysd();

}


