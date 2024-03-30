#include <iostream>

using namespace std;

bool primo(int numero) {
    // verifica se o número é menor ou igual a 1
    if (numero <= 1) {
        return false;
    }

    // verifica se o número é divisível por algum número além de 1 e ele mesmo
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero;

    // solicita que o usuário insira o número inteiro
    cout << "Digite um numero: ";
    cin >> numero;

    // verifica se o número é primo e exibe o resultado
    if (primo(numero)) {
        cout << numero << " eh um numero primo." << endl;
    } else {
        cout << numero << " nao eh um numero primo." << endl;
    }

    return 0;
}
