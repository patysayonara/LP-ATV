#include <iostream>
#include "vetor.hpp"
using std::cout;
using std::cin;
using std::endl;

void vetor(){
    int x, y, contador, novo, valor;
    int vetor_1[10][2] ={{0}, {0}};

    contador = 0;

    cout << "Digite 10 numeros" << endl;

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


    for (x = 0; x <= contador; x++){
        if (vetor_1[x][1] >= 1){
            cout << "O numero " << vetor_1[x][0] << " eh " << vetor_1[x][1] << endl;
        }
    }
}
