#include <stdio.h>

int main(void)
{

    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*
    Print the following pattern

    n = 3 -> * * *
             * * *
             * * *
*/