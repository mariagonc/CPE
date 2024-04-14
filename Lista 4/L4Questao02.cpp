/*
Autor: 202014922 - MARIA CLARA GONÇALVES CORDEIRO

Disciplina: CPE - Computação para engenharia
Professor: Wesin Ribeiro Alves
Monitor: Sebastião Flávio Ribeiro de Morais
Data: 13/04/2024

4ª Lista de Exercícios - Turma 02

Nome do Programa: L4Questao02

Questão 2
Obs: Não consegui exibir os triangulos um ao lado do outro.
*/

#include <iostream>
using namespace std;

int main () {

    int n = 10; // definindo tamando do triangulo

    // impressão dos triangulos um abaixo do outro, usando laço de repetição
cout << "A)\n";
     for(int i = 0; i <= n; i++){
          for(int j = 0;j <= i; j++){
               cout << "*";
          }
          cout << "\n";
     }

     cout << "B)\n";
     for(int j = n; j >= 0; j--){
          for(int i = 0; i <= j; i++){
               cout << "*";
          }
          cout << "\n";
     }

     cout << "C)\n";
     for(int j = n; j >= 0; j--){
          for(int k = 0; k <= n-j; k++){
               cout << " ";
          }
          for(int i = 0; i <= j; i++){
               cout << "*";
          }
          cout << "\n";
     }
     
     cout << "D)\n";
     for(int i = 0; i <= n; i++){
          for(int k = 0;k <= n - i; k++){
               cout << " ";
          }
          for(int j = 0;j <= i; j++){
               cout << "*";
          }
          cout << "\n";
     }

    system("pause");
    return 0;    
}