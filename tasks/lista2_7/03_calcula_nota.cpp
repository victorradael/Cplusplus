#include <iostream>
#include <sstream>
#include <fstream>
#include <list>
using namespace std;

struct Alunos
{
  string nome;
  float p1;
  float p2;
  float t1;
  float t2;
  float t3;
  float t4;
};

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
  arquivo.open("alunos.txt");
  char ch;

  string linha;
  string nbs[7];
  int contador = 0;
  Alunos alunos[30];

  if (arquivo.is_open())
  {
    while (getline(arquivo, linha))
    {
      cout << linha << endl;
      split(linha, ' ', nbs);

      alunos[contador].nome = nbs[0];
      alunos[contador].p1 = stof(nbs[1]);
      alunos[contador].p2 = stof(nbs[2]);
      alunos[contador].t1 = stof(nbs[3]);
      alunos[contador].t2 = stof(nbs[4]);
      alunos[contador].t3 = stof(nbs[5]);
      alunos[contador].t4 = stof(nbs[6]);
      contador++;
    }
  }

  float mediaProvas = 0.00;
  float mediaTrabalhos = 0.00;
  float notaFinal = 0.00;
  cout << endl;

  for (int i = 0; i < 3; i++)
  {
    cout << alunos[i].nome << ' ';
    mediaProvas = ((alunos[i].p1 + alunos[i].p2) / 2) * 0.7;
    mediaTrabalhos = ((alunos[i].t1 + alunos[i].t2 + +alunos[i].t3 + alunos[i].t4) / 4) * 0.3;
    notaFinal = mediaProvas + mediaTrabalhos;
    cout << "Nota: " << notaFinal << endl;
  }
}
