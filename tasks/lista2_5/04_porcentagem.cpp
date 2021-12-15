#include <iostream>
using namespace std;

struct solucao
{
  char elemento[20];
  float porcentagem;
};

int main()
{

  solucao tipo1;
  solucao tipo2;

  cout << endl
       << "Digite o Elemento: ";
  cin >> tipo1.elemento;
  cout << endl
       << "Digite a porcentagem: ";
  cin >> tipo1.porcentagem;
  cout << endl
       << "Digite o Elemento: ";
  cin >> tipo2.elemento;
  cout << endl
       << "Digite a porcentagem: ";
  cin >> tipo2.porcentagem;

  solucao list[2];
  list[0] = tipo1;
  list[1] = tipo2;

  for (int i = 0; i < sizeof(list); i++)
  {
    if (list[i].porcentagem > list[i + 1].porcentagem)
    {
      cout << "Elemento: " << list[i].elemento << endl;
      cout << "Porcentagem: " << list[i].porcentagem << endl;
      return 0;
    }
    else
    {
      cout << "Elemento: " << list[i + 1].elemento << endl;
      cout << "Porcentagem: " << list[i + 1].porcentagem << endl;
      return 0;
    }
  }

  return 0;
}
