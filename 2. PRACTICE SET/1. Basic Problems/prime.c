// Check whether the given number is prime or not.

#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Enter the number: ");
    int num = 0;
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        printf("%d is neither prime nor composite.", num);
    }

    int flag = 1;
    for (int i = 2; i <= (sqrt(num)); i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    flag ? printf("Prime number.") : printf("Not a prime number.");

    return 0;
}
