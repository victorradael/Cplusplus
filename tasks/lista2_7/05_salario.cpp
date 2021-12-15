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
  arquivo.open("folha_de_pagamentos.txt");
  char ch;

  string linha;
  string nbs[3];

  const int codigoGerente = 1;
  const float ajusteGerente = 0.1;
  const int codigoEngenheiro = 2;
  const float ajusteEngenheiro = 0.2;
  const int codigoTecnico = 3;
  const float ajusteTecnico = 0.3;
  const float ajustePadrao = 0.4;

  if (arquivo.is_open())
  {
    ofstream folha;
    folha.open("nova_folha_de_pagamento.txt");

    while (getline(arquivo, linha))
    {
      float salario_novo = 0.00;
      cout << linha << endl;
      split(linha, ' ', nbs);

      if (stoi(nbs[2]) == codigoGerente)
      {

        salario_novo = stof(nbs[1]) + (stof(nbs[1]) * ajusteGerente);
        cout << nbs[0] << "R$ " << salario_novo << endl;
        folha << nbs[0] << " " << salario_novo << " " << nbs[2] << endl;
      }
      else if (stoi(nbs[2]) == codigoEngenheiro)
      {

        salario_novo = stof(nbs[1]) + (stof(nbs[1]) * ajusteEngenheiro);
        cout << nbs[0] << "R$ " << salario_novo << endl;
        folha << nbs[0] << " " << salario_novo << " " << nbs[2] << endl;
      }
      else if (stoi(nbs[2]) == codigoTecnico)
      {

        salario_novo = stof(nbs[1]) + (stof(nbs[1]) * ajusteTecnico);
        cout << nbs[0] << "R$ " << salario_novo << endl;
        folha << nbs[0] << " " << salario_novo << " " << nbs[2] << endl;
      }
      else
      {

        salario_novo = stof(nbs[1]) + (stof(nbs[1]) * ajustePadrao);
        cout << nbs[0] << " R$ " << salario_novo << endl;
        folha << nbs[0] << " " << salario_novo << " " << nbs[2] << endl;
      }
    }
    folha.close();
  }
}
