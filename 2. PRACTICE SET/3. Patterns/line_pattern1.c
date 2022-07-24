#include <stdio.h>

int main(void)
{

    int num;
    printf("Enter the numbr: ");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i)
    {
        printf("* ");
    }

    return 0;
}

/*
    Print the following pattern

    n = 3 -> * * *
*/
