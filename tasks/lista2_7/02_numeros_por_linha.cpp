#include <iostream>
#include <sstream>
#include <fstream>
#include <list>
using namespace std;

int main()
{
  cout << "-----------------------------" << endl;
  cout << "| Bem-vindos ao meu leitor! |" << endl;
  cout << "-----------------------------" << endl;

  ifstream arquivo;
  arquivo.open("numeros_por_linha.txt");
  char ch;

  string linha;
  string nbs[20];

  int quantidade = 0;

  if (arquivo.is_open())
  {
    ofstream pares;
    pares.open("pares.txt");
    ofstream impares;
    impares.open("impares.txt");
    while (getline(arquivo, linha))
    {
      cout << linha << endl;
      if (stoi(linha) % 2 == 0)
      {
        pares << linha << endl;
      }
      else
      {
        impares << linha << '\n';
      }
      quantidade++;
    }
    impares.close();
    pares.close();
  }
}
