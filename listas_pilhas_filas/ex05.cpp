#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> listaNumerica;        // Cria uma lista para armazenar números inteiros.
  int quantidadeInicialNumeros = 3; // Quantidade de números que serão inseridos.
  // Preenchendo a lista
  for (int i = 0; i < quantidadeInicialNumeros; i++)
  {
    listaNumerica.push_back(i); // insere o número <i> no final da lista;
  }
  // Imprime o conteúdo da lista
  cout << endl;
  for (int i = 0; i < listaNumerica.size(); i++)
  {
    cout << listaNumerica[i] << '\t';
  }
  // cria o iterador 'it' apontando para a primeira posição
  vector<int>::iterator it = listaNumerica.begin();
  // insere o número 10 na segunda posição, apagado o valor anterior (1)
  listaNumerica[1] = 10;
  // Imprime o conteúdo da lista
  cout << endl;
  for (int i = 0; i < listaNumerica.size(); i++)
  {
    cout << listaNumerica[i] << '\t';
  }
  return 0;
}