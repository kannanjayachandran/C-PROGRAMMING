#include <stdio.h>

int main(void)
{

    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    while (num >= 10)
    {
        num /= 10;
    }

    printf("First digit is %d", num);

    return 0;
}
/*
    If the number is greater than 10 we have to divide it by 10 until it become a single digit.
    If the number is less than 10, we already has the first digit.
*/