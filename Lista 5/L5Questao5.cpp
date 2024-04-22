/*
Autor: 202014922 - MARIA CLARA GONÇALVES CORDEIRO

Disciplina: CPE - Computação para engenharia
Professor: Wesin Ribeiro Alves
Monitor: Sebastião Flávio Ribeiro de Morais
Data: 22/04/2024

5ª Lista de Exercícios - Turma 02

Nome do Programa: L5Questao5

Objetivo:
Escreva um código que reproduza o jogo de “adivinhar o número” da seguinte forma:
Seu programa escolhe o número a ser adivinhado selecionando um número inteiro
aleatoriamente no intervalo de 1 a 1000. O programa exibe
Eu tenho um número entre 1 e 1000.
Você consegue adivinhar o meu número?
Digite seu primeiro palpite.
O jogador digita um primeiro palpite. O programa responde com um dos seguintes:
1. Excelente! Você adivinhou o número! Você gostaria de jogar novamente (s ou n)?
2. Muito baixo. Tente novamente.
3. Muito alto. Tente novamente.
Se o palpite do jogador estiver incorreto, seu programa deve repetir até que o jogador
finalmente obtenha o número correto. Seu programa deve continuar dizendo ao reprodutor
Muito alto ou Muito baixo para ajudar o leitor a se concentrar na resposta correta. Após o
término do jogo, o programa deve solicitar ao usuário que digite "s" para jogar novamente
ou "n" para sair do jogo.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr)); // Semente para o gerador de números aleatórios

    char jogar_nov = 's';

    while (jogar_nov== 's') {
        int numero = rand() % 1000 + 1; // Gerar número aleatório entre 1 e 1000
        int adiv;
        int tentativas = 0;

        cout << "Eu tenho um numero entre 1 e 1000." << endl;
        cout << "Voce consegue adivinhar o meu numero?" << endl;

        do {
            cout << "Digite seu palpite: ";
            cin >> adiv;
            tentativas++;

            if (adiv == numero) {
                cout << "Excelente! Voce adivinhou o numero em " << tentativas << " tentativas!" << endl;
            } else if (adiv < numero) {
                cout << "Muito baixo. Tente novamente." << endl;
            } else {
                cout << "Muito alto. Tente novamente." << endl;
            }

        } while (tentativas != numero);

        cout << "Voce gostaria de jogar novamente? (s/n): ";
        cin >> jogar_nov;
    }

    cout << "Obrigado por jogar!" << endl;

    return 0;
}
