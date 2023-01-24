#include <stdio.h>

void k_bit_set(int num, int k);

int main(void){

    k_bit_set(5, 0);

    return 0;
}

void k_bit_set(int num, int k){

    int temp = num & 1 << k;

    if (temp!=0){
        printf("%d - bit is set\n", k);
    }else{
        printf("Not set\n");
    }
}

/*
Algorith : This would check if the k-th bit of a number is set or not.

Time complexity : O(1)
Space complexity : O(1)

*/