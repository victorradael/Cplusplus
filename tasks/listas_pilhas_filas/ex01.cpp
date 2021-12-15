#include <iostream>
#include <vector>
using namespace std;

struct ItemCompra
{                 // Estrutura que cria um item de compra de supermercado
  string nome;    // Nome do item a ser comprado
  int quantidade; // quantidade a ser comprada
};
vector<ItemCompra> listaSupermercado; // Cria uma lista de supermercado