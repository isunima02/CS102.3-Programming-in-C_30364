#include <stdio.h>
#include <stdlib.h>

int main()
{
        float marks[10],average,sum=0;
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter the mark %d \n",i+1);
        scanf("%f",&marks[i]);
        sum=sum+marks[i];
        }
        average=sum/10;
        if(average>50)
        {
           printf("Pass \n");
        }
        else{
                printf("Fail\n");
            }

    return 0;
}
