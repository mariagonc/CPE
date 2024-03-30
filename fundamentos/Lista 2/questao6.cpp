#include <iostream>
#include <cmath>

using namespace std;


int main() {

    int a, b;

    // solicita que o usuário insira os números
    cout << "Digite um numero: ";
    cin >> a;

    cout << "Digite outro numero: ";
    cin >> b;

    // verifica se o primeiro número é múltiplo do segundo
    if (b != 0 && a % b == 0) {
        cout << a << " eh multiplo de " << b << endl;
    } else {
        cout << a << " nao eh multiplo de " << b << endl;
    }

    return 0;

}

