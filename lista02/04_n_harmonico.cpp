#include <iostream>
using namespace std;

double harmonico(int n)
{
  if (n == 1)
    return (double)1 / n;
  else
    return (double)1 / n + harmonico(n - 1);
}

int main()
{
  int n;

  while (n != 0)
  {
    cout << "Digite um número, se desejar sair digite 0:   ";
    cin >> n;

    int result = harmonico(n);
    cout << result << endl;
  }

  return 0;
}
