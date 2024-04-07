/*
Lista 3 - Questão 8
Autor: Maria Clara Gonçalves Cordeiro
Data: 06/04/2024

Codifique um programa que faça a leitura de dois números reais. A seguir o programa 
lê um caractere, que deve ser +, -, * u /, e realiza a operação indicada pelo caractere s
obre os valores lidos.
*/

#include <iostream>
#include <iomanip> // Para usar o setprecision

using namespace std;

int main() {

    float iValor1, iValor2;
    char iOperador;

    // solicita ao usuario que insira dois valores
    cout << "Digite o primeiro valor: ";
    cin >> iValor1;
    cout << fixed << setprecision(2);

    cout << "Digite o segundo valor: ";
    cin >> iValor2;
    cout << fixed << setprecision(2);

    cout << "Informe a operacao que deseja realizar (+, -, * ou /): ";
    cin >> iOperador;

    // identifica qual operação será realizada
    switch (iOperador)
    {
    case '+':
        cout << iValor1 + iValor2 << endl;
        break;
    case '-':
        cout << iValor1 - iValor2 << endl;
        break;
    case '*':
        cout << iValor1 * iValor2 << endl;  
    case '/':
        cout << iValor1 / iValor2 << endl; 
    default:
        cout << "Opcao invalida." << endl; 
        break;       
    }

    system("pause");
    return 0;
}