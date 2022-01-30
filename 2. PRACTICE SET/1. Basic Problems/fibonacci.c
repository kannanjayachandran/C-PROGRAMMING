// Find the n th fibonacci number.

#include <stdio.h>

int main(void)
{

    printf("Enter the number: ");
    int num = 0;
    scanf("%d", &num);

    int first = 0, second = 1, temp = 0;
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