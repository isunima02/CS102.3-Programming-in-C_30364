#include <stdio.h>
#include <stdlib.h>

int main()
{
           int n1,n2,n3,lnum,snum;
    printf("Enter n1 number");
    scanf("%d",&n1);
    printf("Enter n2 number");
    scanf("%d",&n2);
    printf("Enter n3 number");
    scanf("%d",&n3);
    if(n1>n2)
      {
          if(n1>n3)
            lnum=n1;
          else
            lnum=n3;
      }

    else
    {
        if(n2>n3)
            lnum=n2;
        else
            lnum=n3;
    }
    if(n1<n2)
     {
         if(n1<n3)
            snum=n1;
        else
           snum=n3;
         }
     else
     {
         if(n2<n3)
            snum=n2;
         else
            snum=n3;
     }
     printf("%d is largest number\n",lnum);
     printf("%d is smalest number\n",snum);

       return 0;
}
