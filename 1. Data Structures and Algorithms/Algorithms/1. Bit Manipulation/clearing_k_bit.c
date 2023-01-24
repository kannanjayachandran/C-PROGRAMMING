#include <stdio.h>

int clear_k_bit(int num, int k);

int main(void){

    printf("%d\n", clear_k_bit(11, 3));

    return 0;
}

int clear_k_bit(int num, int k){

    int mask = ~(1<<k)

    return (num & mask);
}


/*
    Algorithm : To clear the K-th bit of a number.

    Time Complexity : O(1)
    Space Complexity : O(1)

*/