#include <iostream>
using namespace std;

struct viagem
{
  float distancia;
  float consumo;
};

float kmLitro(viagem item)
{
  float result = (item.distancia / item.consumo);
  cout << "Area do Retangulo: " << result << endl;

  return result;
}

int main()
{
  viagem arr[1000 / 8];

  for (int i = 0; i < sizeof(arr); i++)
  {
    cout << "Digite a distancia: " << endl;
    cin >> arr[i].distancia;
    cout << "Digite o consumo: " << endl;
    cin >> arr[i].consumo;
  }

  for (int i = 0; i < sizeof(arr); i++)
  {
    cout << "Distancia: " << arr[i].distancia << endl;
    cout << "Consumo: " << arr[i].consumo << endl;
    cout << "Média de Consumo: " << kmLitro(arr[i]) << endl;
  }

  return 0;
}
