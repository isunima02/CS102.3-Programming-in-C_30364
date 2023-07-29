#include <stdio.h>
#include <stdlib.h>

int main()
{
   float Pi=3.14, area, circumference, radius;
  printf("Enter radius of circle: ");
  scanf("%f",&radius);
  area = Pi * radius * radius;
  printf("Area of circle is: %f\n",area);
  circumference = 2 * Pi * radius;
  printf("Circumference of circle is: %.2f",circumference);

    return 0;
}
