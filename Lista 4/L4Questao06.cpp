/*
Autor: 202014922 - MARIA CLARA GONÇALVES CORDEIRO

Disciplina: CPE - Computação para engenharia
Professor: Wesin Ribeiro Alves
Monitor: Sebastião Flávio Ribeiro de Morais
Data: 13/04/2024

4ª Lista de Exercícios - Turma 02

Nome do Programa: L4Questao06

Questão 6
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed para gerar números aleatórios
    
    int limiteInferior = 1;
    int limiteSuperior = 100;
    int tentativas = 0;
    
    cout << "Pense em um numero entre 1 e 100." << endl;
    cout << "Eu tentarei adivinhar em no maximo 7 perguntas." << endl << endl;
    
    // Loop para fazer no máximo 7 perguntas
    while (tentativas < 7) {
        int palpite = (limiteInferior + limiteSuperior) / 2; // Palpite é o valor médio entre os limites
        
        cout << "O numero em que voce está pensando eh menor que " << palpite << "? (Responda 's' para sim, 'n' para nao): ";
        char resposta;
        cin >> resposta;
        
        // Verifica a resposta do usuário
        if (resposta == 's') {
            limiteSuperior = palpite - 1; // Ajusta o limite superior para o palpite - 1
        } else {
            limiteInferior = palpite + 1; // Ajusta o limite inferior para o palpite + 1
        }
        
        tentativas++;
        
        // Verifica se o palpite é igual ao número pensado pelo usuário
        if (limiteInferior > limiteSuperior) {
            cout << "Voce pensou no numero " << limiteSuperior << "!" << endl;
            cout << "Consegui adivinhar em " << tentativas << " tentativas." << endl;
            break;
        }
    }
    
    if (tentativas >= 7) {
        cout << "Nao consegui adivinhar o número em 7 tentativas. Voce ganhou!" << endl;
    }
    
    system("pause");
    return 0;
}
