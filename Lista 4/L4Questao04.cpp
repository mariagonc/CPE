/*
Autor: 202014922 - MARIA CLARA GONÇALVES CORDEIRO

Disciplina: CPE - Computação para engenharia
Professor: Wesin Ribeiro Alves
Monitor: Sebastião Flávio Ribeiro de Morais
Data: 13/04/2024

4ª Lista de Exercícios - Turma 02

Nome do Programa: L4Questao04

Questão 4
*/

#include <iostream>

using namespace std;

int main() {
    // Definindo os preços de varejo dos produtos
    const double precoProduto1 = 2.98;
    const double precoProduto2 = 4.50;
    const double precoProduto3 = 9.98;
    const double precoProduto4 = 4.49;
    const double precoProduto5 = 6.87;
    
    int numeroProduto;
    int quantidadeVendida;
    double totalVenda = 0.0;
    
    // Laço para ler os pares de números e calcular o total de vendas
    while (true) {
        cout << "Digite o numero do produto (1 a 5, ou 0 para parar): ";
        cin >> numeroProduto;
        
        // Verifica se o usuário deseja parar
        if (numeroProduto == 0) {
            break;
        }
        
        cout << "Digite a quantidade vendida: ";
        cin >> quantidadeVendida;
        
        // Calcula o total de vendas para o produto atual e adiciona ao total geral
        switch(numeroProduto) {
            case 1:
                totalVenda += precoProduto1 * quantidadeVendida;
                break;
            case 2:
                totalVenda += precoProduto2 * quantidadeVendida;
                break;
            case 3:
                totalVenda += precoProduto3 * quantidadeVendida;
                break;
            case 4:
                totalVenda += precoProduto4 * quantidadeVendida;
                break;
            case 5:
                totalVenda += precoProduto5 * quantidadeVendida;
                break;
            default:
                cout << "Numero de produto invalido." << endl;
        }
    }
    
    // Exibe o total de vendas
    cout << "Total de vendas: R$ " << totalVenda << endl;


    system("pause");
    return 0;
}
