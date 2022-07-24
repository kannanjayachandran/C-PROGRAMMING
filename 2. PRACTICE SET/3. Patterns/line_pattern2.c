#include <stdio.h>

int main(void)
{

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i)
    {
        printf("*\n");
    }

    return 0;
}

/*
    Print the following pattern

    n = 3 -> *
             *
             *
*/
