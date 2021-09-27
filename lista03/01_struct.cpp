#include <iostream>
using namespace std;

struct retangulo
{
  float altura;
  float largura;
};

int main()
{
  retangulo figura;

  cout << "Digite a altura: " << endl;
  float altura;
  cin >> altura;
  cout << "Digite a largura: " << endl;
  float largura;
  cin >> largura;

  figura.altura = altura;
  figura.largura = largura;

  cout << "Area do retangulo: " << figura.altura * figura.largura << endl;

  return 0;
}
