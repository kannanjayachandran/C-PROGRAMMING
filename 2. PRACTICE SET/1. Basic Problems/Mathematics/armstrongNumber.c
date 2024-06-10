#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num, arm, num1 = 0;
    printf("Enter the number to check: ");
    scanf("%d", &num);

    num1 = num;

    while (num1 > 0)
    {
        int temp = num1 % 10;
        arm += temp * temp * temp;

        num1 /= 10;
    }

    if (arm == num)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }
    return 0;
}