/**
*@file milionario.hpp
*@brief Arquivo que realiza a implentação da função do cálculo do tempo para se tornar um milionário.
*@author Laura Beatriz
*@since 17/03/2018
*@date 17/03/2018
*@version 1.0
*/

#include <iostream>
#include <math.h>
#include "milionario.hpp"
using std::cout;
using std::cin;
using std::endl;

/**
 *  @brief Função que calcula o tempo para o usuário se tornar um milionário com base no seu salário e nas suas despesas. 
 */
void calcTempMilionario(){
	
    double salario, despesas, saldo;
    int anos;

    cout << "Informe o valor do seu salário: " << endl;
    cin >> salario;
    cout << "Informe o total das suas despesas: " << endl;
    cin >> despesas;

    saldo = salario-despesas;
    anos = ceil((MILHAO/saldo)/12);
    
    cout << "Por mês sobram " << saldo << " reais." << endl;	
    cout << "Você ficará ryca em no mínimo " << anos << " anos." << endl;	
}
