/*
Lista 3 - Questão 7
Autor: Maria Clara Gonçalves Cordeiro
Data: 06/04/2024

Escreva um programa que verifique a validade de uma senha 
fornecida pelo usuário. A senha válida é o número 1234.
*/

#include <iostream>
using namespace std;

int main() {

    int iSenha = 1234;

    // solicita que o usuario insira uma senha
    cout << "Insira sua senha: ";
    cin >> iSenha;

    // verifica se a senha é válida
    if (iSenha == 1234) {
        cout << "ACESSO PERMITIDO" << endl;
    } else {
        cout << "ACESSO NEGADO" << endl;
    }

    system("pause");
    return 0;
}