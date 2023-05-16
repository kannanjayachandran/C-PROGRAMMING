/* Neural Network

Parameter : 1 [1 Neuron]

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


float train[][2] = {
    {0, 0},
    {1, 2},
    {2, 4},
    {3, 6},
    {4, 8},
};

#define train_size (sizeof(train)/sizeof(train[0]))

// creating random numbers
float rand_float(void){
    return (float) rand()/(float) RAND_MAX;
}

float cost_func(float W) {

    float result  = 0.0f;

    for (size_t i = 0; i < train_size; ++i){
        float x = train[i][0];
        float y = x*W;
        float error = y - train[i][1];
        result  += error*error;
    }

    result /= train_size;
    return result;

}

int main() {

    // Random seed
    srand(time(0));
    //srand(98);
    float W = rand_float()*10.0f;

    // Cost function
    float eps = 1e-3;
    float rate = 1e-3;
    printf("%f \n", cost_func( W ));

    // training 
    for (size_t i = 0; i < 500; ++i) {
        float dCost = (cost_func(W + eps) - cost_func(W)) / eps;
        W -= rate * dCost;
    }


    printf("%f\n", cost_func(W));

    return 0;
}