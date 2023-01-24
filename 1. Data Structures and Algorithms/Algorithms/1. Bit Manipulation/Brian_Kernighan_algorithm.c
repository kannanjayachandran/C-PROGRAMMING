#include <stdio.h>

int main(void)
{

    int num = 40, result = 0;

    while (num > 0)
    {
        num &= (num - 1);
        result++;
    }

    printf("Number of set bits are: %d", result);

    return 0;
}

/*
    Brian Kernighan's Algorithm : For counting the set bits in a number.

    Time complexity : Θ(number of set bits)
*/