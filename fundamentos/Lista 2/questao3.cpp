#include <iostream>

using namespace std;

int main() {
    // declaração da constante para o valor de pi
    const double pi = 3.14159;

    // declaração da variável para armazenar o raio do círculo
    double raio;

    // solicita ao usuário que insira o raio do círculo
    cout << "Digite o raio do circulo: ";
    cin >> raio;

    // calcula o diâmetro da circunferência
    double diametro = 2 * raio;

    // calcula a área do círculo
    double area = pi * raio * raio;

    // imprime o diâmetro da circunferência
    cout << "O diametro da circunferencia eh: " << diametro << endl;

    // imprime a área do círculo
    cout << "A area do circulo eh: " << area << endl;

    system("pause");
    return 0;
}
