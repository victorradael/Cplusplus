#include <iostream>
using namespace std;

struct area
{
  float altura;
  float largura;
} retangulo;

int main()
{

  cout << "Digite a altura: " << endl;
  float altura;
  cin >> altura;
  cout << "Digite a largura: " << endl;
  float largura;
  cin >> largura;

  retangulo.altura = altura;
  retangulo.largura = largura;

  cout << "Area do Retangulo: " << retangulo.altura * retangulo.largura;

  return 0;
}
