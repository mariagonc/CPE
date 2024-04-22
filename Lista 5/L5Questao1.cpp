/*
Autor: 202014922 - MARIA CLARA GONÇALVES CORDEIRO

Disciplina: CPE - Computação para engenharia
Professor: Wesin Ribeiro Alves
Monitor: Sebastião Flávio Ribeiro de Morais
Data: 22/04/2024

5ª Lista de Exercícios - Turma 02

Nome do Programa: L5Questao1
*/
#include <iostream>
using namespace std;

// Função para converter Celsius para Fahrenheit
double celsius_para_fahrenheit(double celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

int main() {
    double celsius, fahrenheit;

    // Solicitar ao usuário a temperatura em Celsius
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    // Converter Celsius para Fahrenheit usando a função
    fahrenheit = celsius_para_fahrenheit(celsius);

    // Exibir o resultado
    cout << "A temperatura em Fahrenheit eh: " << fahrenheit << "F" << endl;

    return 0;
}
