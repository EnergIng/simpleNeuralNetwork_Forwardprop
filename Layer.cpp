#include<math.h>
#include "Weight.h"

class Layer
{
private:
    int number_layer, number_hiddenNode, number_outputNode, number_outputNode;
    vector<int> bias = {1, 1};
    vector<double> inputNode_values ={0.2, 0.6};

public:
    Weight weight;      

//Definisco la struttura della rete neurale
    Layer(int number_layer, int number_hiddenNode, int number_outputNode, double outputNode); 

//Definisco la funzione di attivazione da applicare agli output di ogni nodo
    double activationFunction(double);

//Calcolo l'output di ogni nodo tenendo conto della activation function
    double calculateOutputNode(int , Weight&, vector<int> , vector<double>);

    ~Layer(); 
};

Layer::Layer(int number_layer, int number_hiddenNode, int number_outputNode, double outputNode)
{
 int number_layer= number_layer;
 int number_hiddenNode= number_hiddenNode;
 int number_outputNode= number_outputNode;
 int number_outputNode= number_outputNode; 
}

double  Layer::activationFunction(double calculateOutputNode)
{
    return 1/(1+exp(-calculateOutputNode));
}

double Layer::calculateOutputNode(int number_layer, Weight& weight, vector<int> bias, vector<double> inputNode_values)
{
    /*con i seguenti for loop innestati voglio calcolare gli output in ogni nodo in corrispondenza
    di ogni layer, senza applicare la funzione di attivazione
    */
    for (int i=0; i< number_layer; i++)
    {
        for (int j=0; j<weight.inputLayerWeights.size(); j++)
        {
            for (int k=0; j<weight.inputLayerWeights[j].size(); k++)
            {
                //Devo separare il caso in cui mi trovo nel layer di input o nell'hidden layer
                if(number_layer==0) return 0;
            }
        }
        
    }
}

