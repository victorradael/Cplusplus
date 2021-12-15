#include <iostream>
#include <vector>
using namespace std;

struct ItemCompra
{                 // Estrutura que cria um item de compra de supermercado
  string nome;    // Nome do item a ser comprado
  int quantidade; // quantidade a ser comprada
};

vector<ItemCompra> listaSupermercado; // Cria uma lista de supermercado

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
  listaSupermercado.insert(listaSupermercado.end(), sal); // insere item na segunda posição

  return 0;
}