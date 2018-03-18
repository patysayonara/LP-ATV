#include <iostream>
#include "vetor.hpp"
using std::cout;
using std::cin;
using std::endl;

/**
*@file vetor.cpp
*@brief Arquivo com a fun��o que implementa um vetor de 10 posi��es e indica a quantidade de vezes que determinado elemento aparece
*@author  Andr� Ricardo
*@since 08/03/2018
*@date 08/03/2018
*@version 2.0
*/

void vetor(){
    int x, y; /**< Utilizadas como auxiliares para o for */
    int contador; /**< Respons�vel por armazenar a quantidade de valores diferentes s�o armazenadas no vetor*/
    int novo; /**< Serve como um indicador da apari��o de um novo elemento no vetor */
    int valor; /**< Vari�vel auxiliar que armazena temporariamente o valor digitado*/
    int vetor_1[10][2] ={{0}, {0}}; /**< Vetor de duas dimens�es onde ser�o armazenados os elementos e a quantidade de vezes q aquele elemento foi colocado*/

    contador = 0;

    cout << "Digite 10 numeros" << endl;

    /**
    @details O programa consciste em um loop onde ser�o recebidos os valores separadamente, cada valor ser� comparado aos postos
    anteriormente. Caso j� tenha sido utilizado, ser� somado 1 ao valor da segunda coluna do vetor. Caso seja a primeira vez, ser�
    armazenado esse valor e ser� somado um ao seu segundo vetor, al�m de se acrescentar um a vari�vel "contador" respons�vel por
    indicar o n�mero de elementos diferentes foram colocados
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
    @brief Impress�o dos valores digitados e a quantidade de vezes que cada um aparece. Utiliza��o do elemento contador como indicador da quantidade de elementos distintos que foram postos
    */

    for (x = 0; x <= contador; x++){
        if (vetor_1[x][1] >= 1){
            cout << "O numero " << vetor_1[x][0] << " eh " << vetor_1[x][1] << endl;
        }
    }
}
