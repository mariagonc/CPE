/*
Autor: 202014922 - MARIA CLARA GONÇALVES CORDEIRO

Disciplina: CPE - Computação para engenharia
Professor: Wesin Ribeiro Alves
Monitor: Sebastião Flávio Ribeiro de Morais
Data: 22/04/2024

5ª Lista de Exercícios - Turma 02

Nome do Programa: L5Questao3

Objetivo:
Um número inteiro é considerado um número perfeito se a soma de seus fatores,
incluindo 1 (mas não o número em si), for igual ao número. Por exemplo, 6 é um número
perfeito, porque 6 = 1 + 2 + 3. Escreva a função perfect que determina se o número do
parâmetro é um número perfeito. Use esta função em um código que determina e imprime
todos os números perfeitos entre 1 e 1000. Imprima os fatores de cada número perfeito para
confirmar que o número é realmente perfeito.
*/
#include <iostream>
using namespace std;

// Função para determinar se um número é perfeito
bool perfect(int number) {
    int sum = 1; // Inicializamos com 1 porque todo número é divisível por 1
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            sum += i;
            if (i != number / i) {
                sum += number / i;
            }
        }
    }
    return sum == number;
}

// Função para imprimir os fatores de um número perfeito
void print_factors(int number) {
    cout << "Fatores de " << number << ": 1";
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            cout << " + " << i;
            if (i != number / i) {
                cout << " + " << number / i;
            }
        }
    }
    cout << endl;
}

int main() {
    cout << "Numeros perfeitos entre 1 e 1000:" << endl;
    for (int i = 2; i <= 1000; ++i) {
        if (perfect(i)) {
            cout << i << " ";
            print_factors(i);
        }
    }
    cout << endl;

    return 0;
}
