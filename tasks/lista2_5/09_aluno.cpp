#include <iostream>
using namespace std;

struct Aluno
{
  char nome;
  float prova1;
  float prova2;
};

float inserirVeiculo(char nome, float prova1, float prova2)
{
  Aluno aluno;

  aluno.nome = nome;

  aluno.prova1 = prova1;

  aluno.prova2 = prova2;

  return 0;
}

int main()
{

  Aluno lista[20 / 8];

  int option = 0;

  while (option != 40)
  {
    cout << "Digite o nome do Aluno: " << endl;
    cin >> lista[option].nome;
    cout << "Digite a nota da prova 1 do Aluno " << lista[option].nome << ": " << endl;
    cin >> lista[option].prova1;
    cout << "Digite a nota da prova 2 do Aluno " << lista[option].nome << ": " << endl;
    cin >> lista[option].prova2;

    option++;
  }

  Aluno aprovados[20 / 8];
  Aluno reprovados[20 / 8];

  for (int i = 0; i < sizeof(lista); i++)
  {
    float soma = lista[i].prova1 + lista[i].prova1;
    if (soma > 60)
    {
      aprovados[i] = lista[i];
    }
    else
    {
      reprovados[i] = lista[i];
    }
  }
  cout << "APROVADOS: " << endl;
  for (int i = 0; i < sizeof(lista); i++)
  {
    cout << aprovados[i].nome << endl;
  }

  cout << "REPROVADOS: " << endl;
  for (int i = 0; i < sizeof(lista); i++)
  {
    cout << reprovados[i].nome << endl;
  }

  return 0;
}

//epndc
