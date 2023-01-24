#include <stdio.h>

int set_k_bit(int num, int k);

int main(void){

    printf("%d", set_k_bit(5, 1));

    return 0;
}

int set_k_bit(int num, int k){

    return (num | (1<<k));
}

/*

    Algorithm : To set the k-th bit of a number

    Time complexity : O(1)

    Space complexity : O(1)

*/