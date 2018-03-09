#include <iostream>
#include "calcceds.hpp"
using std::cin;
using std::cout;
using std::endl;

void calcCeds(){
	int v[7], i, valor;
	cout << "Digite o valor a ser analisado: ";
	cin >> valor;
	cout << "Os valores serao impressos em ordem de cédulas 100, 50, 20, 10, 5, 2 e 1" << endl;

	for(i = 0; i < 7; i++){
		v[i] = 0;
	}

	while(valor >= 100){
		v[0]++;
		valor -= 100;
	}

	while(valor >= 50){
		v[1]++;
		valor -= 50;
	}

	while(valor >= 20){
		v[2]++;
		valor -= 20;
	}

	while(valor >= 10){
		v[3]++;
		valor -= 10;
	}

	while(valor >= 5){
		v[4]++;
		valor -= 5;
	}

	while(valor >= 2){
		v[5]++;
		valor -= 2;
	}

	while(valor >= 1){
		v[6]++;
		valor -= 1;
	}

    for(i = 0; i < 7; i++) {
        cout << v[i] << " cedula(s)." << endl;
    }
}
