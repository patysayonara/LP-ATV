#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    char servico[2];

    cout << "Informe o tipo de programa desejado!" << endl;
    cout << "Digite A para calcular quantos meses sao necessarios para se tornar um milionario" << endl;
    cout << "Digite B para receber o relatorio de quantas vezes 10 numeros aparecem" << endl;
    cout << "Digite C para saber quantas cedulas de especificos valores sao necessarias para chegar a uma certa quantia" << endl;
    cout << "Qual o programa desejado?" << endl;
    cin >> servico;

    if(servico == "A"){
        //chamar função A
    } else {
        if(servico == "B"){
            //chamar função B
        } else {
            if(servico == "C"){
                //chamar função C
            } else {
                cout << "Foi digitado uma icognita nao reconhecivel pelo programa. Tente novamente!" << endl;
            }
        }
    }


    return 0;
}
