#include <iostream>
using namespace std;

int serieS(int n)
{
  if (n > 0)
    return ((n * n + 1) / (float)(n + 3)) + serieS(n - 1);
  else
    return 0;
}

int main()
{
  int n;

  while (n != 0)
  {
    cout << "Digite um número, se desejar sair digite 0:   ";
    cin >> n;

    float result = serieS(n);
    cout << result << endl;
  }

  return 0;
}
