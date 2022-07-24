#include <stdio.h>

void adder(int []);

int main()
{
    int array[10];
    printf("Enter 10 numbers : ");

    // For loop for storing elements.
    for (int i=0; i<10; ++i)
    {
        printf("Enter %d element : ", i);
        scanf("%d", &array[i]);
     }

    // Calling adder function.
   adder(array);

    return 0;
} // end of main.

void adder (int arr[]){

        int sum=0;
        for  (int j=0; j<10; ++j){
        sum =sum + arr[j] ;
         }
        printf("Sum of the elements is : %d", sum);
}  // end of adder.

// This program will take 10 numbers as input in an array and find the sum of those 10 numbers.
