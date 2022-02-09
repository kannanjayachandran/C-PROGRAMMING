#include <stdio.h>

int main(void)
{

    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    while (num > 10)
    {
        num /= 10;
    }

    printf("First digit is %d", num);

    return 0;
}