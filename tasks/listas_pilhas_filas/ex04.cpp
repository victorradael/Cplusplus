#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> listaNumerica; // Cria uma lista para armazenar números inteiros.
  vector<int>::iterator it;
  int quantidadeInicialNumeros = 3; // Quantidade de números que serão inseridos na lista.
  // Preenchendo a lista
  for (int i = 0; i < quantidadeInicialNumeros; i++)
    listaNumerica.push_back(i); // insere o número <i> no final da lista;
  // Imprime o conteúdo da lista
  for (it = listaNumerica.begin(); it < listaNumerica.end(); it++)
    cout << *it;
  // cria o iterador 'it' apontando para a primeira posição
  it = listaNumerica.begin();
  // remove o segundo elemento da lista
  listaNumerica.erase(it + 1);
  // Imprime o conteúdo da lista
  for (it = listaNumerica.begin(); it < listaNumerica.end(); it++)
    cout << *it;
  return 0;
}