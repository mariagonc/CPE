/*
Lista 3 - Questão 6
Autor: Maria Clara Gonçalves Cordeiro
Data: 06/04/2024

Escreva um programa que leia as medidas dos lados de um triângulo
e escreva se ele é Equilátero, Isósceles ou Escaleno.
*/

#include <iostream>
using namespace std;

int main() {

    float iLado1, iLado2, iLado3;

    // solicita que o usuário insira o tamando de cada lado do triângulo
    cout << "Digite o tamanho do lado 1: ";
    cin >> iLado1;

    cout << "Digite o tamando do lado 2: ";
    cin >> iLado2;

    cout << "Digite o tamanho do lado 3: ";
    cin >> iLado3;

    // verifica se o triangulo é Equilátero, Isósceles ou Escaleno.
    if (iLado1 == iLado2 && iLado2 == iLado3 ) {
        cout << "O triangulo eh Equilatero." << endl;
    } else if (iLado1 == iLado2 || iLado1 == iLado3 || iLado2 == iLado3) {
        cout << "O triangulo eh Isosceles." << endl;
    } else {
         cout << "O triangulo eh escaleno." << endl;
    }


    system("pause");
    return 0;
}

