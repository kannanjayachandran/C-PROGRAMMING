#include <stdio.h>

int gcd(int, int, int);

int main(void)
{
    int num1, num2;
    printf("Enter the numbers: ");
    scanf("%d %d", &num1, &num2);

    int min = num1 < num2 ? num1 : num2;

    int ans = gcd(min, num1, num2);

    printf("%d is the GCD of %d and %d", ans, num1, num2);

    return 0;
}

int gcd(int num, int num1, int num2)
{

    int result;
    for (int i = 1; i <= num; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            result = i;
        }
    }
    return result;
}