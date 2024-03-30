#include <iostream>

using namespace std;

int main() {
    float largura, comprimento;

    // solicita que o usuário insira a largura da sala
    cout << "Digite a largura: ";
    cin >> largura;

    //solicita que o usuário insira o comprimento da sala
    cout << "Digite o comprimento: ";
    cin >> comprimento;

    // calcula a área da sala
    float area = largura * comprimento;

    // mostra a área da sala
    cout << "A area da sala eh: " << area << " metros quadrados." << endl;
 
    system("pause");
    return 0;
}
