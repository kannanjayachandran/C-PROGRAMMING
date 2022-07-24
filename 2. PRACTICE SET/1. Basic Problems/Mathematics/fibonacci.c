// Find the n th fibonacci number.

#include <stdio.h>

int main(void)
{
    int first = 0, second = 1, temp = 0, num = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
    {
        temp = second;
        second += first;
        first = temp;
    }

    printf("The %d fibonacci term is %d", num, second);

    return 0;
}
// This would only work till 46. This is not an efficient way to find fibonacci series.