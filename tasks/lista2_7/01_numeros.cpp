#include <iostream>
#include <sstream>
#include <fstream>
#include <list>
using namespace std;

void split(string linha, char at, string nbs[])
{
  int pos = 0, fim, i = 0;

  do
  {
    fim = linha.find(at, pos);
    if (fim == -1)
    {
      nbs[i] = linha.substr(pos);
    }
    else
    {
      nbs[i++] = linha.substr(pos, fim - pos);
    }
    pos = fim + 1;
  } while (fim != -1);
}

int main()
{
  cout << "-----------------------------" << endl;
  cout << "| Bem-vindos ao meu leitor! |" << endl;
  cout << "-----------------------------" << endl;

  ifstream arquivo;
  arquivo.open("inteiros.txt");
  char ch;

  string linha;
  string nbs[20];

  if (arquivo.is_open())
  {
    while (getline(arquivo, linha))
    {

      cout << linha << endl;
      split(linha, ' ', nbs);
    }
  }

  int menor_que_dez = 0;
  float acumulador = 0;
  float media = 0.00;

  for (int i = 0; i < 20; i++)
  {
    acumulador = acumulador + stof(nbs[i]);
    int number = stoi(nbs[i]);
    if (number < 10)
    {
      menor_que_dez++;
    }
  }
  cout << "Média: " << acumulador / 20 << endl;
  cout << "Quantidade de números menores que 10: " << menor_que_dez;
}
