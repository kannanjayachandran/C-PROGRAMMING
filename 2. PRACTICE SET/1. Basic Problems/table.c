// Given a number n and m print the table of n till m-th iteration

#include <stdio.h>

int main(void)
{

    int m, n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter the iteration number: ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i++)
    {
        printf("%d * %d = %d\n", i, n, i * n);
    }
}