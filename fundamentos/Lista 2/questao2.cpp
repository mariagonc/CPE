#include <iostream>

using namespace std;

int a, b; // declaração das variáveis para armazenar os números

int main(){

    // solicita ao usuário que insira os valores
    cout << "Digite um valor: ";
    cin >> a;

    cout << "Digite outro valor: ";
    cin >> b;

    // calcula e mostra o resultado da soma dos valores
    int soma = a+b;
    cout << "Soma: " << soma << endl;
    
    // calcula e mostra o resultado da subtração dos valors
    int sub = a-b;
    cout << "Diferenca: " << sub << endl;

    // calcula e mostra o resultado da multiplicação dos valores
    int mult = a*b;
    cout << "Produto: " << mult << endl;

    // calcula e mostra o resultado da divisão dos valores
    int quocdiv = a/b;
    cout << "Quociente: " << quocdiv << endl;


    system("pause"); // pausa o programa pra não fechar direto
    return 0;
}