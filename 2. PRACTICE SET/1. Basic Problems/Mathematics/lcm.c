#include <stdio.h>

int lcm(int, int);

int main(void)
{
    int num1, num2;
    printf("Enter the numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    int ans = lcm(num1, num2);

    printf("%d", ans);
}

int lcm(int first, int second)
{

    int max = first > second ? first : second;

    int product = first * second;

    for (int i = max; i <= product; i++)
    {
        if ((i % first == 0) && (i % second == 0))
        {
            return i;
        }
    }
}