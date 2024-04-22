/*
Autor: 202014922 - MARIA CLARA GONÇALVES CORDEIRO

Disciplina: CPE - Computação para engenharia
Professor: Wesin Ribeiro Alves
Monitor: Sebastião Flávio Ribeiro de Morais
Data: 22/04/2024

5ª Lista de Exercícios - Turma 02

Nome do Programa: L5Questao4

Objetivo:
Os computadores estão desempenhando um papel crescente na educação. Escreva um
programa que ajude um aluno do ensino fundamental a aprender multiplicação. Use o
módulo aleatório para produzir dois números inteiros positivos de um dígito. O programa
deve exibir uma pergunta, como
Quanto é 6 vezes 7?
O aluno digita a resposta. Em seguida, o programa verifica a resposta do aluno. Se estiver
correto, imprima a string "Muito bom!" na tela e faça outra pergunta de multiplicação. Se a
resposta for errada, exibir "Não. Por favor, tente novamente." e deixe o aluno tentar a
mesma pergunta repetidamente até que o aluno finalmente acerte. Uma função separada
deve ser usada para gerar cada nova pergunta. Este método deve ser chamado uma vez
quando o programa iniciar a execução e sempre que o usuário responder à pergunta
corretamente.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Função para gerar uma nova pergunta de multiplicação
void gera_questao(int &num1, int &num2) {
    // Seed para o gerador de números aleatórios
    srand(time(nullptr));

    // Gerar dois números inteiros positivos de um dígito
    num1 = rand() % 9 + 1;
    num2 = rand() % 9 + 1;
}

// Função para verificar a resposta do aluno
bool verifica_resposta(int num1, int num2, int resposta) {
    return resposta == num1 * num2;
}

int main() {
    int num1, num2, resposta;

    // Gerar a primeira pergunta
    gera_questao(num1, num2);

    // Loop principal
    while (true) {
        // Exibir a pergunta
        cout << "Quanto eh " << num1 << " vezes " << num2 << "? ";
        cin >> resposta;

        // Verificar a resposta
        if (verifica_resposta(num1, num2, resposta)) {
            cout << "Muito bom!\n";
            // Gerar uma nova pergunta
            gera_questao(num1, num2);
        } else {
            cout << "Nao. Por favor, tente novamente.\n";
        }
    }

    return 0;
}
