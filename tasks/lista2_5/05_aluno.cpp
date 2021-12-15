#include <iostream>
using namespace std;

struct Aluno
{
  char nome[20];
  float nota;
};

int main()
{

  Aluno lista[10];

  for (int i = 0; i < 10; i++)
  {
    cout << "Digite o nome do(a) aluno(a) " << i + 1 << " : ";
    cin >> lista[i].nome;
    cout << "Digite a nota do(a) aluno(a) " << lista[i].nome << " : ";
    cin >> lista[i].nota;
  }

  for (int i = 0; i < 10; i++)
  {
    cout << "Nome: " << lista[i].nome << " ";
    cout << "Nota: " << lista[i].nota << endl;
  }

  return 0;
}
