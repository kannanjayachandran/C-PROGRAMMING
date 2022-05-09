#include <stdio.h>

int main(void)
{

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    num %= 10;

    printf("%d is the last digit.", num);

    return 0;
}