/*
Lista 3 - Questão 2
Autor: Maria Clara Gonçalves Cordeiro
Data: 06/04/2024

Crie uma calculadora alcool x gasolina. O etanol vale a pena de custar até 70% do valor da gasolina. 
Dividimos o valor do litro do alcool pelo da gasolina. Quando o resultado é menor de 0.7, exiba uma 
recomendação dizendo para abastecer com alcool. Se for maior, exiba a recomendação para escolher 
a gasolina.
*/

#include <iostream>
using namespace std;

int main () { // início da função principal

    float iGasolina, iAlcool, iTotal;

    // Solicita o valor da gasolina
    cout << "Informe o valor do litro da gasolina: R$ ";
    cin >> iGasolina;

    // Solicita o valor do alcool
    cout << "Informe o valor do litro do Alcool: R$";
    cin >> iAlcool;

    // Calcula a proporção entre os valores da gasolina e do alcool 
    iTotal = iGasolina / iAlcool;

    // Verifica se o alcool vale a pena em relação a gasolina
    if(iTotal < 0.7) {
        cout << "Recomenda-se abastecer com Etanol.\n";
    } else { 
        cout << "Recomenda-se abastecer com Gasolina.\n";
    }

    system("pause");
    return 0;
}
