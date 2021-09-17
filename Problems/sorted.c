#include <stdio.h>

int sorted(int[], int);

int main()
{
    //Number of  elements in array.
    int n=0;
    printf("Enter the number of elements in the array: \t");
    scanf("%d", &n);

   // Populating the array.
    int arr[n];
    for(int i = 0; i < n; ++i){
            printf("Enter the %d element: ", i);
            scanf("%d", &arr[i]);
    }

    //Checking
    if(sorted(arr, n)){
        printf("Sorted");
    }
    else {
        printf("Not sorted");
    }

return 0;
}

int sorted(int a[], int b){

        for(int j = 0; j < b; ++j){
            if(a[j]  > a[j+1] ){
                return 0;
            }
            else{
                return 1;
            }
        }
} // end of sort

//  This program will check if the given array is sorted or not.
