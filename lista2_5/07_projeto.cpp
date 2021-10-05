#include <iostream>
using namespace std;

struct Projeto
{
  char nome[20];
  int horastrabalhadas;
  float valorhora;
};

float valorprojeto(Projeto projeto)
{
  return projeto.horastrabalhadas * projeto.valorhora;
}

int main()
{

  Projeto lista[3];

  cout << "Digite o nome do Projeto: ";
  cin >> lista[0].nome;
  cout << "Digite as horas trabalhadas: ";
  cin >> lista[0].horastrabalhadas;
  cout << "Digite o valor da hora: ";
  cin >> lista[0].valorhora;

  int option = 0;

  while (option != 4)
  {
    cout << "Digite a opção que desejar: " << endl;
    cout << "1 - Inserir Projeto" << endl;
    cout << "2 - Exibir os dados do projeto cujo nome for fornecido" << endl;
    cout << "3 - Listar todos os dados dos projetos cadastrados" << endl;
    cout << "4 - Sair" << endl;
    cout << "Digite aqui:";
    cin >> option;

    Projeto projeto;

    switch (option)
    {
    case 1:

      cout << "Digite o nome do Projeto : ";
      cin >> lista[sizeof(lista) + 1].nome;
      cout << "Digite as horas trabalhadas: ";
      cin >> lista[sizeof(lista) + 1].horastrabalhadas;
      cout << "Digite o valor da hora: ";
      cin >> lista[sizeof(lista) + 1].valorhora;

      break;

    case 2:
      char nome[20];
      cout << "Digite o nome do Projeto: ";
      cin >> nome;
      for (int i = 0; i < 3; i++)
      {

        if (nome == lista[i].nome)
        {
          cout << "Nome do Projeto: " << lista[i].nome << endl;
          cout << "Horas Trabalhadas: " << lista[i].nome << endl;
          cout << "Valor da Hora: " << lista[i].nome << endl;
        }
      }
      break;

    case 3:
      for (int i = 0; i < 3; i++)
      {
        cout << "Nome do Projeto: " << lista[i].nome << endl;
        cout << "Horas Trabalhadas: " << lista[i].horastrabalhadas << endl;
        cout << "Valor da hora: " << lista[i].valorhora << endl;
        cout << "Preço do Projeto: " << valorprojeto(lista[i]) << endl;
      }
      break;

    case 4:
      option = 4;
      break;

    default:
      break;
    }
  }

  return 0;
}

//epndc
