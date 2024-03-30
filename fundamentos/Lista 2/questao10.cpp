#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    int contador_vogais[5] = {0};

    cout << "Digite uma palavra com 5 letras: ";
    cin >> str;

    // verifica quantas vezes cada vogal aparece na string e atualiza o contador
    for (char c : str) {
        for (int i = 0; i < 5; ++i) {
            if (tolower(c) == vogais[i]) {
                ++contador_vogais[i];
            }
        }
    }

    // mostra quantas vezes cada vogal aparece
    cout << "Numero de vezes que cada vogal aparece:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << vogais[i] << ": " << contador_vogais[i] << " vezes" << endl;
    }

    // criptografa a string substituindo as vogais conforme as regras dadas
    for (char& c : str) {
        switch (c) {
            case 'a':
                c = 'i';
                break;
            case 'e':
                c = 'o';
                break;
            case 'i':
                c = 'u';
                break;
            case 'o':
                c = 'a';
                break;
            case 'u':
                c = 'e';
                break;
            default:
                break;
        }
    }

    // mostra a nova string criptografada
    cout << "A nova string criptografada eh: " << str << endl;

    system("pause");
    return 0;
}