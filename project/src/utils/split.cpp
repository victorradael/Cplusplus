#include <iostream>
using namespace std;

void split(string linha, char at, string nbs[])
{
  int pos = 0, fim, i = 0;

  do
  {
    fim = linha.find(at, pos);
    if (fim == -1)
    {
      nbs[i] = linha.substr(pos);
    }
    else
    {
      nbs[i++] = linha.substr(pos, fim - pos);
    }
    pos = fim + 1;
  } while (fim != -1);
}