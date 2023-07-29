#include <stdio.h>
#include <stdlib.h>

int main()
{
   int choice;
    float radius,pi=3.14;
    printf("menu:\n");
    printf("1.calculate the circumference of a cricle\n");
    printf("2.calculate aera of the cricle\n");
    printf("3.calculate volume of a sphere\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("Enter the radius:");
    scanf("%f",&radius);
    switch(choice){
      case 1:printf("Cricumference:%.2f\n",2*pi*radius);break;
      case 2:printf("Area:%.2f\n",pi*radius*radius);break;
      case 3:printf("Volume:%.2f\n",4/3.0*pi*radius*radius*radius);break;
      default:printf("Invalid choice.\n");
    }

    return 0;
}
