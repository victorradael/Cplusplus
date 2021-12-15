#include <iostream>
using namespace std;

void funcao(char *str, char *n, char *e)

{

  while (*str != '.')
  {

    *n = *str;

    n++;

    str++;
  }

  str++;

  while (*str != 0)
    *e++ = *str++;

  *e = 0;

  cout << n << e;
}

int main()
{
  char *str = "ufsj.cap";
  funcao(str, "", "");
}
