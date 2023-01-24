#include <stdio.h>
#include <stdbool.h>

void linearSearch(int a[], int num, int length);

int main(void){

    int arr[] = {10, 2, 4, 6, 3, 76, 2, 29};
    int target =  39;
    int size = sizeof(arr)/sizeof(arr[0]);

    linearSearch(arr, target, size);

    return 0;
}// end of main

// linear search function
void linearSearch(int a[], int num, int length){

    bool found = false;
    int index = -1;

    for (int i = 0; i < length; i++){

        if (a[i] == num){
            found = true;
            index = i;
            break;
        }
    }

    if (found){
        printf("%d exists in the array at %d index.\n", num, index);
    }else{
        printf("%d does not exists in the array.\n", num);
    }
}
