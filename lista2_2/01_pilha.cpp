#include <iostream>
using namespace std;

int f1(int n)
{
  if (n == 0)
    return (1);
  else
    return (n * f1(n - 1));
}

int f2(int n)
{
  if (n == 0)
    return (1);
  if (n == 1)
    return (1);
  else
    return (f2(n - 1) + f2(n - 2));
}

int mdc_recursiva(int a, int b)
{
  if (a % b == 0)
    return b;
  return mdc_recursiva(b, a % b);
}

int main()
{

  cout << f1(0) << endl;
  cout << f1(1) << endl;
  cout << f1(5) << endl;

  cout << f2(1) << endl;
  cout << f2(3) << endl;
  cout << f2(4) << endl;

  cout << '10,8' << mdc_recursiva(10, 8) << endl;
  cout << '20,15' << mdc_recursiva(20, 15) << endl;
  cout << '36,21' << mdc_recursiva(36, 21) << endl;

  return 0;
}
