#include <stdio.h>

int main(void)
{

    int num, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        num /= 10;
        count++;
    }

    printf("%d is the number of digits.", count);

    return 0;
}