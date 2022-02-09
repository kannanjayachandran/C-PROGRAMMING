// First n fibonacci series.

#include <stdio.h>

int main(void)
{
    int first = 0, second = 1, temp = 0, num = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("0, 1");
    for (int i = 2; i <= num; i++)
    {
        printf(", ");
        temp = second;
        second += first;
        first = temp;
        printf("%d", second);
    }

    return 0;
}