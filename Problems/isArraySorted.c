#include <stdio.h>

void isSort(int[] , int);

int main()
{
    //Number of  elements in array.
    int num=0;
    printf("Enter size of the array: ");
    scanf("%d", &num);

     // Populating the array.
    int arr[num];
    for(int i = 0; i < num; ++i){
            printf("Enter the %d element: ", i);
            scanf("%d", &arr[i]);
    }

    //  Edge case checking.
    if (num == 0 || num == 1){
        printf("Array is sorted");
    }

    //  Calling the function.
    isSort(arr, num);

     return 0;
}

//  function declaration
void isSort(int arr[], int b){

        int i =0;

       while (i < b){
            int first = arr[i];   // Setting the first element.
            int second = arr[i+1];  // setting the second element.

                if(first > second){  // Comparing the elements for unsorted condition.
                        printf("Not sorted");
                    return ;
                 }

                if((first == second) || (first < second)){  // Checking if the adjacent numbers are sorted or not
                    i++;
                    if(i >= b){
                        printf("Array is sorted");
                        return;
                }
            }
        }  // end of while loop.
}  // end of isSort.

// This program checks if the array is sorted.

