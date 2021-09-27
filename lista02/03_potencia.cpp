#include <iostream>
using namespace std;

int potencia(int x, int y)
{
  if (y == 0)
    return 1;
  else
    return x * potencia(x, y - 1);
}

int main()
{
  int x;
  cin >> x;
  int y;
  cin >> y;

  int result = potencia(x, y);

  cout << result << endl;

  return 0;
}
