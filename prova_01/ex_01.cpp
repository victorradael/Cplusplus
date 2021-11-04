#include <iostream>
using namespace std;

float function(float x, float y)
{
  if (x > y)
  {
    return x;
  }

  return y;
}

int main()
{
  int n = 10;

  float x[n] = {13.5, 18.9, 65.1, 27.7, 24.9, 59.2, 51.4, 31.8, 11.3, 31};
  ;

  float y = x[0];

  for (int i = 1; i < n; i++)
  {
    y = function(x[i], y);
  }

  cout << y;
}