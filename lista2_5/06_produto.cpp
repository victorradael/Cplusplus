#include <iostream>
using namespace std;

struct Produto
{
  char nome[20];
  float preco;
  int estoque;
};

int main()
{

  Produto lista[3];

  for (int i = 0; i < 3; i++)
  {
    cout << "Digite o nome do produto " << i + 1 << " : ";
    cin >> lista[i].nome;
    cout << "Digite o preço do(a) " << lista[i].nome << " : ";
    cin >> lista[i].preco;
    cout << "Digite a quantidade em estoque de " << lista[i].nome << " : ";
    cin >> lista[i].estoque;
  }
  float menorPreco = lista[0].preco;
  float maiorPreco = lista[0].preco;

  for (int i = 1; i < 3; i++)
  {
    if (lista[i].preco > maiorPreco)
      maiorPreco = lista[i].preco;

    if (lista[i].preco < maiorPreco)
      menorPreco = lista[i].preco;
  }

  for (int i = 0; i < 3; i++)
  {
    if (lista[i].preco == maiorPreco)
    {
      cout << "Maior Preço: " << lista[i].nome << " " << lista[i].preco << " " << lista[i].estoque << endl;
    }
    if (lista[i].preco == menorPreco)
    {
      cout << "Menor Preço: " << lista[i].nome << " " << lista[i].preco << " " << lista[i].estoque << endl;
    }
  }

  return 0;
}
