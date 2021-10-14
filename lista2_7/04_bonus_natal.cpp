#include <iostream>
#include <sstream>
#include <fstream>
#include <list>
using namespace std;

struct Funcionario
{
  string nome;
  int idade;
  int numeroDeFilhos;
  int anosDeServico;
};

main()
{
  cout << "-----------------------------" << endl;
  cout << "| Bem-vindos ao meu leitor! |" << endl;
  cout << "-----------------------------" << endl;

  Funcionario f;

  cout << "Digite seu Nome: ";
  cin >> f.nome;
  cout << endl;
  cout << "Digite sua Idade: ";
  cin >> f.idade;
  cout << endl;
  cout << "Digite a quantidade de filhos: ";
  cin >> f.numeroDeFilhos;
  cout << endl;
  cout << "Digite quantos anos tem de servioço: ";
  cin >> f.anosDeServico;
  cout << endl;

  int bonus = 0;

  if (f.idade > 45)
  {
    bonus = (f.idade - 45) * 5;
  }

  if (f.numeroDeFilhos > 3)
  {
    bonus = bonus + (45);
  }
  else
  {
    bonus = bonus + (f.numeroDeFilhos * 15);
  }

  bonus = bonus + (f.anosDeServico * 20);

  cout << "Bonus R$" << bonus;

  ofstream bonusDeNatal;
  bonusDeNatal.open("bonus_de_natal.txt");
  bonusDeNatal << f.nome << " R$" << bonus << endl;
  bonusDeNatal.close();
}
