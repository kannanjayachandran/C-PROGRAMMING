// A program to find all the prime factors of a given

#include <stdio.h>
#include <math.h>

int isPrime(int);
void primeFactor(int);

int main(void)
{

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    primeFactor(num);

    return 0;
} // end of main

void primeFactor(int num)
{
    for (int i = 2; i <= num; ++i)
    {
        if (isPrime(i))
        {
            int x = i;
            while (num % x == 0)
            {
                printf("%d ", i);
                x *= i;
            }
        }
    }
} // end of primeFactor

int isPrime(int a)
{
    for (int i = 2; i <= sqrt(a); ++i)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}