#include <iostream>
#include "milionario.hpp"
#include "vetor.hpp"
#include "calcceds.hpp"
using std::cout;
using std::cin;
using std::endl;

/**
*@file main.cpp
*@brief Arquivo main do programa que gerencia a chamada das funcoes.
*@author Andre Ricardo, Laura Beatriz, Patricia Sayonara
*@since 07/03/2018
*@date 08/03/2018
*@version 2.0
*/

int main(){
    int servico;

    cout << "Informe o tipo de programa desejado!" << endl;
    cout << "Digite 1 para calcular quantos meses sao necessarios para se tornar um milionario" << endl;
    cout << "Digite 2 para receber o relatorio de quantas vezes 10 numeros aparecem" << endl;
    cout << "Digite 3 para saber quantas cedulas de especificos valores sao necessarias para chegar a uma certa quantia" << endl;
    cout << "Qual o programa desejado?" << endl;
    cin >> servico;

    /**
    *@brief Chamada das funcoes que fazem parte do programa.
    */
    if(servico == 1){
        calcTempMilionario();
    } else if(servico == 2){
        vetor();
    } else if(servico == 3){
        calcCeds();
    } else {
        cout << "Foi digitado uma icognita nao reconhecivel pelo programa. Tente novamente!" << endl;
    }

    return 0;
}
