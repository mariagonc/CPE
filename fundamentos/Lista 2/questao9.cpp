#include <iostream>

using namespace std;

int main() {
    double distancia, custo_total, custo_medio;

    // solicita que o usuário digite a distância em km
    cout << "Digite a distancia em km: ";
    cin >> distancia;

    // calcula o custo total com base nos valores fornecidos na questão
    if (distancia <= 50) {
        custo_total = distancia * 1.75;
    } else if (distancia <= 100) {
        custo_total = 50 * 1.75 + (distancia - 50) * 1.65;
    } else {
        custo_total = 50 * 1.75 + 50 * 1.65 + (distancia - 100) * 1.50;
    }

    // calcula o custo médio por quilômetro
    custo_medio = custo_total / distancia;

    // exibe o valor total e o custo médio por quilômetro
    cout << "O valor total do aluguel do automovel eh: R$ " << custo_total << endl;
    cout << "O custo medio por quilometro eh: R$ " <<  custo_medio << endl;

    system("pause");
    return 0;
}
