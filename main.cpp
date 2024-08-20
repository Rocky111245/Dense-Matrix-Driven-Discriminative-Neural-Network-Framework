#include <vector>
#include "Neural Network Framework.h"




int main() {

    // AND gate input and output data
    std::vector<std::vector<float>> inputData = {
            {1, 1, 1},
            {1, 0, 1},
            {0, 1, 1},
            {0, 0, 0},

    };


    Matrix input_matrix=Matrix_Data_Preprocessor(4,2,0,0,inputData);
    Matrix::Print(input_matrix);
    Matrix output_matrix= Matrix_Data_Preprocessor(4,1,2,0,inputData);
    Matrix::Print(output_matrix);
    auto neural_layer_information=Form_Network({1},input_matrix,output_matrix,ActivationType::RELU,ActivationType::SIGMOID);
    Learn(neural_layer_information,0.01,105000);

}


//Under Test environment


//    Matrix inputs= Matrix_Maker_2DArray(4, 8, 3, 0, &data[0][0]);
//    Matrix_Display(inputs);
//
//    Matrix output= Matrix_Maker_2DArray(4,8,1,3,&data[0][0]);
//    Matrix_Display(output);
//
//

//    std::vector<Neural_Layer> network = Form_Network({3,3,1}, inputs);
//    Learn(network,{3,3,1},inputs,output,0.0014,405000);