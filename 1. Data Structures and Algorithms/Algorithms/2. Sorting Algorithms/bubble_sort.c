#include <stdio.h>
#include "random_array.h"

void bubble_sort(int num);

int main(void)
{
    int num;
    printf("Enter the size of the array: \n");
    scanf("%d", &num);

    bubble_sort(num);

    return 0;
}//end of main

void bubble_sort(int n){

    int *arr = randNum(n);

    if (arr){

        int size = n;

        printf("The given array before sorting is: \n");

        for (int p = 0; p < size; ++p)
        {
            printf("%d ", arr[p]);
        }

        // Bubble sort algorithm
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

        printf("\nThe given array after sorting is: \n");
        for (int p = 0; p < size; ++p)
        {
            printf("%d ", arr[p]);
        }
        printf("\n");

        free(arr);

    }
}
