#include <stdio.h>

int main(void)
{

    int arr[] = {100, 20, 50, 30, 10, 40, 70, 60, 90, 80};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The given array before sorting is: ");
    for (int p = 0; p < size; ++p)
    {
        printf("%d ", arr[p]);
    }

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < (size - i - 1); ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nThe given array after sorting is: ");
    for (int p = 0; p < size; ++p)
    {
        printf("%d ", arr[p]);
    }

    return 0;
}

// Bubble sort in c.