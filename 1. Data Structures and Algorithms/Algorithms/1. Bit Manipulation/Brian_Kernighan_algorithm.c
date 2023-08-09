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

    When we subtract 1 from a number the all the bits following the rightmost 
    set of bits are inverted. Therefore if we do number & (number-1) until the 
    number becomes zero, the number of iteration is the number of set bits.

    Time complexity : Θ(number of set bits) or O(log(n))

    Space complexity : O(1)
*/
