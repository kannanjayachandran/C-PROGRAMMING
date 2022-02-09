#include <stdio.h>

int main(void)
{

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i)
    {
        for (int j = 0; j < num; ++j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

/*
    Print the following pattern

    n = 3 -> 0 1 2
             0 1 2
             0 1 2
*/