#include <vector>
#include <iostream>
using namespace std;

struct ItemCompra
{
  string nome;
  int quantidade;
};

vector<ItemCompra> listaSupermercado;

int main()
{
  ItemCompra macarrao;
  macarrao.nome = "Macarrão";
  macarrao.quantidade = 2;
  listaSupermercado.push_back(macarrao); // insere item no final da lista
  ItemCompra sabao;
  sabao.nome = "Sabão";
  sabao.quantidade = 5;
  listaSupermercado.push_back(sabao);
  ItemCompra sal;
  sal.nome = "Sal";
  sal.quantidade = 1;
  listaSupermercado.insert(listaSupermercado.begin() + 2, sal); // insere item na segunda posição
  listaSupermercado.pop_back();                                 // Resposta

  for (int i = 0; i < listaSupermercado.size(); i++)
  { //For até a ultima posição da lista
    cout << listaSupermercado[i].nome << endl;
  }

  return 0;
}