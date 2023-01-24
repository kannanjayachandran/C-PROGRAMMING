#include <stdio.h>

void binarySearch(int a[], int num, int length);

int main(void){

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 900;
    int size= sizeof(arr)/sizeof(arr[0]);

    binarySearch(arr, target, size);

    return 0;
}// end of main

// binary search function
void binarySearch(int a[], int num, int length){

    int start = 0;
    int end = length-1;

    while (start <= end){
        
        int mid = (start+end)/2;

        if (a[mid] == num){

            printf("%d is found at %d.\n", num, mid);
            return;
        }
        else if (a[mid] > num){
            end = mid-1;
        }
        else if (a[mid] < num){
            start = mid+1;
        }
    }

    printf("Element not found. \n");
}