#include <iostream>
#include <math.h>
#include "milionario.hpp"
using std::cout;
using std::cin;
using std::endl;

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
