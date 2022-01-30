// First n fibonacci series.

#include <stdio.h>

int main(void)
{

    printf("Enter the number: ");
    int num = 0;
    scanf("%d", &num);

    printf("0, 1");
    int first = 0, second = 1, temp = 0;
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