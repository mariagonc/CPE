/*
Lista 3 - Questão 1
Autor: Maria Clara Gonçalves Cordeiro
Data: 06/04/2024

Crie um código que receba como entrada a quantidade de litros e a quantidade de quilômetros 
percorridos pelo carro e calcule o consumo de cada tanque completado em km/litro. Após processar 
todas as entradas, calcule e imprima a média do consumo que o carro fez.
*/

#include <iostream>
using namespace std;

int main () { // início da função principal

    float iDistancia, iCombustivel, iKm_por_litro;

    // Solicita ao usuário a distância percorrida em km 
    cout << "Digite a distancia percorrida em km: ";
    cin >> iDistancia;

    // Solicita ao usuário a quantidade de gasolina consumida em litros
    cout << "Digite a quantidade de gasolina consumida em litros: ";
    cin >> iCombustivel;

    // Calcula a média do consumo
    iKm_por_litro = iDistancia / iCombustivel;

    // Mostra o resultado
    cout << "O carro fez " << iKm_por_litro << " km por litro." << endl;


    system("pause");
    return 0;
}