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
  arquivo.open("texto.txt");
  char ch;

  string linha;
  string nbs[3000];
  string palavra;

  cout << "Digite a palavra que deseja saber o número de ocorrências: ";
  cin >> palavra;

  if (arquivo.is_open())
  {
    while (getline(arquivo, linha))
    {
      cout << linha << endl;
      split(linha, ' ', nbs);
    }
  }

  int contador = 0;

  for (int i = 0; i < 3000; i++)
  {
    if (palavra == nbs[i])
    {
      contador++;
    }
  }
  cout << "Repete " << contador << " vezes." << endl;
}
