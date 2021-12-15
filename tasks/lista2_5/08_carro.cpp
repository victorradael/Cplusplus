#include <iostream>
using namespace std;

struct Veiculo
{
  char chassi[20];
  char placa[7];
  int fabricacao;
};

float buscaPorPLaca(Veiculo lista[3], char placa[7])
{
  for (int i = 0; i < sizeof(lista); i++)
  {

    if (placa == lista[i].placa)
    {
      cout << "Nome do Projeto: " << lista[i].chassi << endl;
      cout << "Horas Trabalhadas: " << lista[i].placa << endl;
      cout << "Valor da Hora: " << lista[i].fabricacao << endl;
    }
  }

  return 0;
}

float inserirVeiculo(Veiculo lista[3])
{
  cout << "Digite o chssi do Veiculo : ";
  cin >> lista[sizeof(lista) + 1].chassi;
  cout << "Digite aplaca do veiculo: ";
  cin >> lista[sizeof(lista) + 1].placa;
  cout << "Digite o valor da hora: ";
  cin >> lista[sizeof(lista) + 1].fabricacao;

  return 0;
}

int main()
{

  Veiculo lista[3];

  int option = 0;

  while (option != 3)
  {
    cout << "Digite a opção que desejar: " << endl;
    cout << "1 - Inserir Veiculo" << endl;
    cout << "2 - Buscar veiculo pela placa" << endl;
    cout << "3 - Sair" << endl;

    cout << "Digite aqui:";
    cin >> option;

    Veiculo projeto;

    switch (option)
    {
    case 1:
      inserirVeiculo(lista);
      break;

    case 2:
      char placa[7];
      cout << "Digite a placa do veiculo: ";
      cin >> placa;
      buscaPorPLaca(lista, placa);

      break;

    case 3:
      option = 3;
      break;

    default:
      break;
    }
  }

  return 0;
}

//epndc
