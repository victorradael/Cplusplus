#include <iostream>
using namespace std;

int serieS(double n)
{
  if (n > 0)
  {
    double dividendo = (1 + n * n);
    double divisor = n;
    double divisao = dividendo / divisor;
    double resultado = divisao + serieS(n - 1);
    return resultado;
  }
  else
    return 0;
}

int main()
{
  double n;

  while (n != 0)
  {
    cout << "Digite um número, se desejar sair digite 0:   ";
    cin >> n;

    double result = serieS(n);
    cout << result << endl;
  }

  return 0;
}
