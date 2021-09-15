#include <stdio.h>

int main()
{
    int n=0;
    int arr[n];
    printf("Enter the number of elements to be stored: ");
    scanf("%d", &n);

    // Loop for storing number....
    for (int i=0; i<n; ++i)
    {
        printf("enter %d number ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("The values are\n");

    // For loop for printing the values....
    for (int j =0; j<n; ++j)
    {
        printf("%d,", arr[j]);
    }

    printf("\nThe values are(Reversed) :\n");

    // For loop for printing in the reverse order....
    //Starting from n-1 because as the array is 0 indexed last term should be at n-1

    for (int k =(n-1); k >= 0; k--)
    {
        printf("%d,",arr[k]);
    }

    return 0;
}

//A program to take inputs in an array and print them in the reverse order
//size of the array is declared by the user...
