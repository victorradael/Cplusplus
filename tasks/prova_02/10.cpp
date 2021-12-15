#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int *p;
  int n[2];

  n[0] = 1;
  n[1] = 2;

  p = n;
  p[1] = 3;
  *(p++) = 6;
  *(p--) = 10;

  cout << "*p= " << *p << " p[1]= " << p[1] << endl;
  return 0;
}
