/*
Autor: 202014922 - MARIA CLARA GONÇALVES CORDEIRO

Disciplina: CPE - Computação para engenharia
Professor: Wesin Ribeiro Alves
Monitor: Sebastião Flávio Ribeiro de Morais
Data: 22/04/2024

5ª Lista de Exercícios - Turma 02

Nome do Programa: L5Questao2

Objetivo:
a) Escreva uma função que determine se um número é primo.
b) Use esta função em um código que determina e imprime todos os números primos entre
2 e 1.000.
*/
#include <iostream>
#include <cmath>
using namespace std;

// Função para determinar se um número é primo
bool is_prime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int limite_superior = 1000;

    // Imprime todos os números primos entre 2 e 1000
    cout << "Numeros primos entre 2 e " << limite_superior << ":" << endl;
    for (int i = 2; i <= limite_superior; ++i) {
        if (is_prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
