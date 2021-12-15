#include <iostream>
#include <list>
using namespace std;
int main()
{
  list<int> listaNumerica;          // Cria uma lista para armazenar números inteiros.
  int quantidadeInicialNumeros = 3; // Quantidade de números que serão inseridos na lista.
  // Preenchendo a lista
  for (int i = 0; i < quantidadeInicialNumeros; i++)
  {
    listaNumerica.push_back(i); // insere o número <i> no final da lista;
  }
  // Imprime o conteúdo da lista
  cout << endl;
  for (list<int>::iterator it = listaNumerica.begin(); it != listaNumerica.end(); it++)
  {
    cout << *it << '\t';
  }
  // cria o iterador 'it' apontando para a primeira posição
  list<int>::iterator it = listaNumerica.begin();
  /*
 * avança o iterador para a segunda posição. Como se trata de uma lista encadeada
 * a operação it+1 não produz o mesmo efeito do exemplo da lista em vetor.
 */
  it++;
  // insere o numero 10 na segunda posição, afastando os demais números
  listaNumerica.insert(it, 10);
  // Imprime o conteúdo da lista
  cout << endl;
  for (list<int>::iterator it = listaNumerica.begin(); it != listaNumerica.end(); it++)
  {
    cout << *it << '\t';
  }
  return 0;
}