#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Define the structure of the neural network
#define INPUT_NODES 3
#define HIDDEN_NODES 4
#define OUTPUT_NODES 1
#define ALPHA 0.1

// Activation functions
double sigmoid(double x)
{
    return 1.0 / (1.0 + exp(-x));
}

double relu(double x)
{
    return (x > 0) ? x : 0;
}

// Derivatives of the activation functions
double sigmoid_derivative(double x)
{
    return x * (1.0 - x);
}

double relu_derivative(double x)
{
    return (x > 0) ? 1 : 0;
}

// Weights and biases initialization
double hidden_weights[INPUT_NODES][HIDDEN_NODES];
double hidden_biases[HIDDEN_NODES];
double output_weights[HIDDEN_NODES][OUTPUT_NODES];
double output_biases[OUTPUT_NODES];

// Function to initialize weights and biases
void init_weights()
{
    for (int i = 0; i < INPUT_NODES; i++)
    {
        for (int j = 0; j < HIDDEN_NODES; j++)
        {
            hidden_weights[i][j] = ((double)rand() / RAND_MAX) - 0.5;
        }
    }

    for (int i = 0; i < HIDDEN_NODES; i++)
    {
        hidden_biases[i] = ((double)rand() / RAND_MAX) - 0.5;
        for (int j = 0; j < OUTPUT_NODES; j++)
        {
            output_weights[i][j] = ((double)rand() / RAND_MAX) - 0.5;
        }
    }

    for (int i = 0; i < OUTPUT_NODES; i++)
    {
        output_biases[i] = ((double)rand() / RAND_MAX) - 0.5;
    }
}

// Forward propagation function
void forward_propagation(double input[INPUT_NODES], double hidden_output[HIDDEN_NODES], double final_output[OUTPUT_NODES], char activation_fn)
{
    // Calculate activations for the hidden layer
    for (int i = 0; i < HIDDEN_NODES; i++)
    {
        double activation = hidden_biases[i];
        for (int j = 0; j < INPUT_NODES; j++)
        {
            activation += input[j] * hidden_weights[j][i];
        }
        if (activation_fn == 's')
        {
            hidden_output[i] = sigmoid(activation);
        }
        else if (activation_fn == 'r')
        {
            hidden_output[i] = relu(activation);
        }
    }

    // Calculate activations for the output layer
    for (int i = 0; i < OUTPUT_NODES; i++)
    {
        double activation = output_biases[i];
        for (int j = 0; j < HIDDEN_NODES; j++)
        {
            activation += hidden_output[j] * output_weights[j][i];
        }
        if (activation_fn == 's')
        {
            final_output[i] = sigmoid(activation);
        }
        else if (activation_fn == 'r')
        {
            final_output[i] = relu(activation);
        }
    }
}

// Backward propagation function
void backward_propagation(double input[INPUT_NODES], double hidden_output[HIDDEN_NODES], double final_output[OUTPUT_NODES], double target[OUTPUT_NODES], char activation_fn)
{
    double output_error[OUTPUT_NODES];
    double hidden_error[HIDDEN_NODES];

    // Calculate error for the output layer
    for (int i = 0; i < OUTPUT_NODES; i++)
    {
        output_error[i] = target[i] - final_output[i];
    }

    // Calculate error for the hidden layer
    for (int i = 0; i < HIDDEN_NODES; i++)
    {
        hidden_error[i] = 0.0;
        for (int j = 0; j < OUTPUT_NODES; j++)
        {
            hidden_error[i] += output_error[j] * output_weights[i][j];
        }

        if (activation_fn == 's')
        {
            hidden_error[i] *= sigmoid_derivative(hidden_output[i]);
        }
        else if (activation_fn == 'r')
        {
            hidden_error[i] *= relu_derivative(hidden_output[i]);
        }
    }

    // Update weights and biases for the output layer
    for (int i = 0; i < OUTPUT_NODES; i++)
    {
        output_biases[i] += ALPHA * output_error[i];
        for (int j = 0; j < HIDDEN_NODES; j++)
        {
            output_weights[j][i] += ALPHA * hidden_output[j] * output_error[i];
        }
    }

    // Update weights and biases for the hidden layer
    for (int i = 0; i < HIDDEN_NODES; i++)
    {
        hidden_biases[i] += ALPHA * hidden_error[i];
        for (int j = 0; j < INPUT_NODES; j++)
        {
            hidden_weights[j][i] += ALPHA * input[j] * hidden_error[i];
        }
    }
}

// Training function
void train(double inputs[][INPUT_NODES], double targets[][OUTPUT_NODES], int epochs, int training_size, char activation_fn)
{
    double hidden_output[HIDDEN_NODES];
    double final_output[OUTPUT_NODES];

    for (int epoch = 0; epoch < epochs; epoch++)
    {
        for (int i = 0; i < training_size; i++)
        {
            forward_propagation(inputs[i], hidden_output, final_output, activation_fn);
            backward_propagation(inputs[i], hidden_output, final_output, targets[i], activation_fn);
        }
    }
}

// Main function
int main()
{
    srand(time(0)); // Seed the random number generator

    // Example training data (XOR problem)
    double inputs[4][INPUT_NODES] = {
        {0.0, 0.0, 0.0},
        {0.0, 1.0, 1.0},
        {1.0, 0.0, 1.0},
        {1.0, 1.0, 0.0}};

    double targets[4][OUTPUT_NODES] = {
        {0.0},
        {1.0},
        {1.0},
        {0.0}};

    // Initialize weights and biases
    init_weights();

    // Train the network
    train(inputs, targets, 10000, 4, 's'); // Use 'r' for ReLU activation, 's' for sigmoid

    // Test the network
    double hidden_output[HIDDEN_NODES];
    double final_output[OUTPUT_NODES];

    printf("Results after training:\n");
    for (int i = 0; i < 4; i++)
    {
        forward_propagation(inputs[i], hidden_output, final_output, 'r'); // Use the same activation function used in training
        printf("Input: %.1f %.1f %.1f => Output: %.3f\n", inputs[i][0], inputs[i][1], inputs[i][2], final_output[0]);
    }

    return 0;
}
