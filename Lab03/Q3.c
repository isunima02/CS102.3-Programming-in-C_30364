#include <stdio.h>
#include <stdlib.h>

int main()
{
 char ename[30];
 float nsalary,bsalary,inc;
 printf("enter employee name");
 scanf("%s",&ename);
 printf("enter basic salary");
 scanf("%f",&bsalary);
 if(bsalary<10000)
    inc=bsalary*0.15;
 else if(bsalary<=5000)
    inc=bsalary*0.10;
else
    inc=bsalary*0.5;
nsalary=bsalary+inc;
printf("Employee name %s \n",ename);
printf("nsalary %.2f",nsalary);

    return 0;
}
