// Finding sum of  'n' numbers using the formula : sum = n(n+1)

#include<stdio.h>

void sum(int a){

        int sum = 0;
        sum = a * (a + 1) / 2;
        printf("Sum = %d", sum);
}  // end of sum

int main()
{
    int num;
    printf("Enter n: ");
    scanf("%d", &num);

    sum(num);  // Calling function
    return 0;
}


