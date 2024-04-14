/*
Autor: 202014922 - MARIA CLARA GONÇALVES CORDEIRO

Disciplina: CPE - Computação para engenharia
Professor: Wesin Ribeiro Alves
Monitor: Sebastião Flávio Ribeiro de Morais
Data: 13/04/2024

4ª Lista de Exercícios - Turma 02

Nome do Programa: L4Questao05

Questão 5
*/

#include <iostream>

using namespace std;

int main() {
    const int MAX_NUM = 30;
    const int NUM_INPUTS = 5;
    
    int numeros[NUM_INPUTS];
    
    // Ler os cinco números entre 1 e 30
    for (int i = 0; i < NUM_INPUTS; i++) {
        cout << "Digite um numero entre 1 e 30: ";
        cin >> numeros[i];
        
        // Verificar se o número está dentro do intervalo válido
        if (numeros[i] < 1 || numeros[i] > MAX_NUM) {
            cout << "Numero invalido! Por favor, insira um numero entre 1 e 30." << endl;
            i--; // Repetir a leitura para este número
        }
    }
    
    // Exibir as barras de asteriscos para cada número lido
    cout << "Barras de asteriscos:" << endl;
    for (int i = 0; i < NUM_INPUTS; i++) {
        cout << numeros[i] << ": ";
        for (int j = 0; j < numeros[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
