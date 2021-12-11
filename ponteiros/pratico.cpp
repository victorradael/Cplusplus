#include <iostream>
using namespace std;
struct Pessoa
{
  string nome;
  int idade;
};
int main()
{
  Pessoa *p;      // declaração da variável p como um ponteiro para Pessoa
  p = new Pessoa; // alocação de memória para Pessoa, p passa apontar para essa área de memória alocada
  cout << "Digite o nome:";
  cin >> p->nome; // uso do operador "->" ao invés de "." pois o p é um ponteiro
  cout << "Digite a idade:";
  cin >> p->idade;
  cout << p->nome << " " << p->idade << endl;
  cout << "Os dados da Pessoa são:" << endl;
  cout << "Nome: " << p->nome << endl
       << "Idade: " << p->idade << endl;
}