#ifndef NEURAL_NETWORK_H
#define NEURAL_NETWORK_H


typedef struct Neuron{
	unsigned int nb_weights;
	double bias, activation;
	double *weights;
} Neuron;

Neuron newNeuron(unsigned int nb_weights);

typedef struct Layer{
	unsigned int nb_neurons;
	Neuron *neurons;
} Layer;

Layer newLayer(unsigned int size, unsigned int previous_layer_size);

typedef struct Network{
	unsigned int nb_layers;
	Layer *layers;
} Network;

Network newNetwork(unsigned int sizes[], unsigned int nb_layers);

void feedforward(Network network);

double sigmoid(double x);

double sigmoid_prime(double x);

double* softmax(double arr[], int size);


#endif
