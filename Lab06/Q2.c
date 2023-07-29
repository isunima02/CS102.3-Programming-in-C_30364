#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter the size of the array :");
    scanf("%d" , &x);

    int arr1[x],arr2[x];

    for (int i = 0; i < x; i++)
    {
        printf("Enter element %d of arr1: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < x; i++)
    {
        printf("Enter element %d of arr2: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int ss = 0;

    for (int i = 0; i < x; i++)
    {
    ss += arr1[i] * arr2[i];
    }

    int vs[x];

    for (int i = 0; i < x; i++)
    {
    vs[i] = arr1[i] + arr2[i];
    }

    int vp[x];

    for (int i = 0; i < x; i++)
    {
    vp[i] = arr1[i] * arr2[i+1] - arr1[i+1] * arr2[i];
    }

    printf("Scalar sum: %d\n", ss);
    printf("Vector sum: ");

    for (int i = 0; i < x; i++) {
    printf("%d ", vs[i]);
    }

    printf("\nVector product: ");
    for (int i = 0; i < x; i++) {
    printf("%d ", vp[i]);
    }

    printf("\n");





    int size=0;
    int scalar_product = 1;
    int sum = 0;
    int array1[10], array2[10], array3[10];
    int i;


    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the elements of the second array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }
    printf("Sum of relative elements:\n");
    for (i = 0; i < size; i++) {
        array3[i] = array1[i] + array2[i];
        printf("%d ", array3[i]);
    }
    printf("\n");


    printf("Product of relative elements:\n");
    for (i = 0; i < size; i++) {
        array3[i] = array1[i] * array2[i];
        printf("%d ", array3[i]);
    }
    printf("\n");


    for (i = 0; i < size; i++) {
        array3[i] = array1[i] * array2[i];
        scalar_product *= array3[i];
        sum += array3[i];
    }
    printf("Scalar product: %d\n", scalar_product);
    printf("Sum of third array: %d\n", sum);


    return 0;
}
