#pragma once
#include<vector>
using namespace std;

struct Weight
{
    vector<vector<double>> inputLayerWeights= { {0.72, 0.72}, {0.37, 0.18}, {0.41, 0.40} }; // vettore 3d con i pesi associati al lafer di input
    vector<double> hiddenLayerWeigths= {0.5, 0.55, 0.3}; // vettore dei pesi per l'hidden layer
};
