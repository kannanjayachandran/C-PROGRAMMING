// C program to find the next prime number after a given number.

#include <stdio.h>

int prime(int);

int main(void)
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int number = prime(n);
    printf("%d is the next prime number.", number);

    return 0;
}

int prime(int num)
{
    int i;
    while (1)
    {
        for (i = 2; i < num + 1; ++i)
        {
            if (num % i == 0)
                break;
        }
        if (i == num)
            return num;
        num++;
    }
}