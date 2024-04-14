/*
Autor: 202014922 - MARIA CLARA GONÇALVES CORDEIRO

Disciplina: CPE - Computação para engenharia
Professor: Wesin Ribeiro Alves
Monitor: Sebastião Flávio Ribeiro de Morais
Data: 13/04/2024

4ª Lista de Exercícios - Turma 02

Nome do Programa: L4Questao03

Questão 3
*/

#include <iostream>

using namespace std;

int main() {
    for (int lado1 = 1; lado1 <= 20; lado1++) {
        for (int lado2 = 1; lado2 <= 20; lado2++) {
            for (int hipotenusa = 1; hipotenusa <= 20; hipotenusa++) {
                if (lado1 * lado1 + lado2 * lado2 == hipotenusa * hipotenusa) {
                    cout << "Triplo de Pitagoras: (" << lado1 << ", " << lado2 << ", " << hipotenusa << ")" << endl;
                }
            }
        }
    }

    system("pause");
    return 0;
}
