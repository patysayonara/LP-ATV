/**
*@file vetor.cpp
*@brief Arquivo com a funcao que implementa um vetor de 10 posicoes e indica a quantidade de vezes que determinado elemento aparece
*@author  Andre Ricardo
*@since 08/03/2018
*@date 08/03/2018
*@version 2.0
*/

#include <iostream>
#include "vetor.hpp"
using std::cout;
using std::cin;
using std::endl;

void vetor(){
    int x, y; /**< Utilizadas como auxiliares para o for */
    int contador; /**< Responsavel por armazenar a quantidade de valores diferentes sao armazenadas no vetor*/
    int novo; /**< Serve como um indicador da aparicao de um novo elemento no vetor */
    int valor; /**< Variavel auxiliar que armazena temporariamente o valor digitado*/
    int vetor_1[10][2] ={{0}, {0}}; /**< Vetor de duas dimensoes onde serao armazenados os elementos e a quantidade de vezes q aquele elemento foi colocado*/

    contador = 0;

    cout << "Digite 10 numeros" << endl;

    /**
    @details O programa consiste em um loop onde serao recebidos os valores separadamente, cada valor sera comparado aos postos
    anteriormente. Caso ja tenha sido utilizado, sera somado 1 ao valor da segunda coluna do vetor. Caso seja a primeira vez, sera
    armazenado esse valor e sera somado um ao seu segundo vetor, alem de se acrescentar um a variavel "contador" responsavel por
    indicar o numero de elementos diferentes foram colocados
    */

    for (x = 0; x < 10; x++){
        cin >> valor;

        for (y = 0, novo = 1; y <= x; y++){
            if (vetor_1[y][0] == valor){
                vetor_1[y][1]++;
                novo = 0;
                y = x+1;
            }
        }

        if (novo == 1){
            vetor_1[contador][0] = valor;
            vetor_1[contador][1]++;
            contador++;
        }
    }

    /**
    @brief Impressao dos valores digitados e a quantidade de vezes que cada um aparece. Utilizacao do elemento contador como indicador da quantidade de elementos distintos que foram postos
    */

    for (x = 0; x <= contador; x++){
        if (vetor_1[x][1] >= 1){
            cout << "O numero " << vetor_1[x][0] << " eh " << vetor_1[x][1] << endl;
        }
    }
}
