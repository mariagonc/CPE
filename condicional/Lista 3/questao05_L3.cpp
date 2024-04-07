/*
Lista 3 - Questão 5
Autor: Maria Clara Gonçalves Cordeiro
Data: 06/04/2024

Crie um programa que detecta se um caractere fornecido de entrada 
é uma vogal usando o comando switch case.
*/

#include <iostream>
using namespace std;

int main() {

    char iLetra;

    // solicita ao usuário que insira uma letra
    cout << "Insira uma letra: ";
    cin >> iLetra;

    // verifica se a letra digitada é vogal
    switch (iLetra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Eh uma vogal." << endl;
            break;
        default:
        cout << "Nao eh uma vogal." << endl;        
    }


    system("pause");
    return 0;
}
