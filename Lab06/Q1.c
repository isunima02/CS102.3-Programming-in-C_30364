#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i,min, max, sum;

    // Input values into the array
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate minimum, maximum, and sum
    min = max = sum = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }

    // Calculate average
    float average = (float)sum / 10.0;

    // Reverse order of values in the array
    int temp;
    for (i = 0; i < 5; i++) {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }

    // Display the results
    printf("\nMinimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);

    printf("\nValues in reverse order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }



    return 0;
}
