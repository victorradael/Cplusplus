#include <iostream>
using namespace std;

int fibonacci(int n)
{
  int x;

  if (n == 1)
  {
    return (1);
  }

  if (n == 2)
  {
    return (1);
  }

  x = fibonacci(n - 1) + fibonacci(n - 2);
  return (x);
}

int main()
{
  int n;

  while (n != 0)
  {
    cout << "Digite um número, se desejar sair digite 0:   ";
    cin >> n;

    int result = fibonacci(n);
    cout << result << endl;
  }

  return 0;
}
