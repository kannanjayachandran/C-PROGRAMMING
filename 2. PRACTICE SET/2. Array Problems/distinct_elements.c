// Count the number of distinct elements in the given array.

#include <stdio.h>

int isDistinct(int[], int);

int main(void)
{
    int arr[] = {1, 3, 5, 3, 1, 5, 6, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("There are %d distinct elements in the given array.", isDistinct(arr, n));

    return 0;
}

int isDistinct(int arr[], int n)
{
    int count = 0;
    int unique = 1;

    for (int i = 0; i < n; i++)
    {
        unique = 1;
        for (int j = i - 1; j >= 0; --j)
        {
            if (arr[i] == arr[j])
            {
                unique = 0;
                break;
            }
        }
        if (unique == 1)
            count++;
    }

    return count;
}