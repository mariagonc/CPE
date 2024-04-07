/*
Lista 3 - Questão 4
Autor: Maria Clara Gonçalves Cordeiro
Data: 06/04/2024

Entre com valores inteiros de 0s e 1s representando um numero binário 
e calcule seu valor decimal correspondente
*/

#include <iostream>
#include <cmath> // Para std::pow

using namespace std;

int main() {
    int numero_binario, decimal = 0, digito, expoente = 0;

    // Solicita ao usuário inserir o número binário
    cout << "Digite um numero binario (composto apenas por 0s e 1s): ";
    cin >> numero_binario;

    // Calcula o valor decimal do número binário
    while (numero_binario > 0) {
        digito = numero_binario % 10;
        decimal += digito * pow(2, expoente);
        numero_binario /= 10;
        expoente++;
    }

    // Exibe o valor decimal correspondente
    cout << "O valor decimal correspondente eh: " << decimal << endl;

    return 0;
}
