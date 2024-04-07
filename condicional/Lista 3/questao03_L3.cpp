/*
Lista 3 - Questão 3
Autor: Maria Clara Gonçalves Cordeiro
Data: 06/04/2024

Escreva um código que lê cinco dígitos inteiros e determina se é um palíndromo.
*/

#include <iostream>
using namespace std;

int main() {

    int iNumero, iReverso = 0, iDigito, iOriginal;

    // solicita ao usuário que insira um numero com 5 digitos
    cout << "Digite um numero de 5 digitos: ";
    cin >> iNumero;

    
    iOriginal = iNumero; // mantém uma cópia do número digitado

    // um loop, que reverte o numero digitado
    while  (iNumero > 0) {
        iDigito = iNumero % 10;
        iReverso = iReverso * 10 + iDigito;
        iNumero /= 10;
    }

    // verifica se o numero original é igual ao numero revertido
    if (iOriginal == iReverso)  {
        cout << "O numero " << iOriginal << " eh um palindromo." << endl;
    } else {
        cout << "O numero " << iOriginal << " nao eh um palindromo." << endl;
    }

    system("pause");
    return 0;
}