#include <iostream>
using namespace std;

struct triangulo
{
  float altura;
  float largura;
};

float calculaArea(triangulo figura)
{
  float result = (figura.altura * figura.largura) / 2;
  cout << "Area do Retangulo: " << result << endl;

  return result;
}

int main()
{

  triangulo figura1;
  triangulo figura2;
  triangulo figura3;

  cout << "Digite a altura da figura 1: " << endl;
  cin >> figura1.altura;
  cout << "Digite a largura da figura 1: " << endl;
  cin >> figura1.largura;

  cout << "Digite a altura da figura 2: " << endl;
  cin >> figura2.altura;
  cout << "Digite a largura da figura 2: " << endl;
  cin >> figura2.largura;

  cout << "Digite a altura da figura 3: " << endl;
  cin >> figura3.altura;
  cout << "Digite a largura da figura 3: " << endl;
  cin >> figura3.largura;

  float area1 = calculaArea(figura1);
  float area2 = calculaArea(figura2);
  float area3 = calculaArea(figura3);

  float result;

  if (area1 > area2 && area1 > area3)
  {
    result = area1;
  }

  if (area2 > area1 && area2 > area3)
  {
    result = area2;
  }

  if (area3 > area1 && area3 > area2)
  {
    result = area3;
  }

  cout << "A maior área é: " << endl
       << result << endl;

  return 0;
}
