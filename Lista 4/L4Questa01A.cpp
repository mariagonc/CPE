/*
Autor: 202014922 - MARIA CLARA GONÇALVES CORDEIRO

Disciplina: CPE - Computação para engenharia
Professor: Wesin Ribeiro Alves
Monitor: Sebastião Flávio Ribeiro de Morais
Data: 13/04/2024

4ª Lista de Exercícios - Turma 02

Nome do Programa: L4Questao01A
Obs: Tive dificuldade para realizar as questões B e C, acabei não fazendo.
*/

#include <iostream>
using namespace std;

int main () { // início da função princiopal

    int iNumero, iFatorial;
    char cont = 'S';

    cout << "CALCULADORA DE FATORIAL\n\n";

    do { // cria um laço de repetição caso o usuário queira inserir outros valores
        iFatorial = 1;
        cout << "Digite um valor: ";
        cin >> iNumero;

        // calcula o fatorial de um número
        for (int iAuxiliar = 1; iAuxiliar <= iNumero; iAuxiliar++)
        {
            iFatorial = iFatorial * iAuxiliar;
        }
        cout << "O fatorial de " << iNumero << " eh: " << iFatorial << endl;
        cout << "\n\nContinuar? [S/N]\n";
        cin >> cont;
        cout << "\n\n";
    } while (cont == 's' || cont == 'S');


    system("pause");
    return 0;
}