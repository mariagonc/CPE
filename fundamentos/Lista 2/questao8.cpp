#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int cateto1, cateto2;

    // solicita que o usuário insira os comprimentos dos catetos
    cout << "Insira o comprimento do primeiro cateto: ";
    cin >> cateto1;

    cout << "Insira o comprimento do segundo cateto: ";
    cin >> cateto2;

    // calcula a hipotenusa usando o Teorema de Pitágoras
    int hipotenusa = (cateto1 * cateto1 + cateto2 * cateto2);

    // mostra a hipotenusa calculada
    cout << "A hipotenusa do triangulo retangulo eh: " << hipotenusa << endl;


    system("pause");
    return 0;
}
