#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

void split(string linha, char at, vector<string> nbs[])
{
  int pos = 0, fim, i = 0;

  do
  {
    fim = linha.find(at, pos);
    if (fim == -1)
    {
      nbs.insert(nbs.begin() + pos) = linha.substr(pos);
    }
    else
    {
      nbs[i++] = linha.substr(pos, fim - pos);
    }
    pos = fim + 1;
  } while (fim != -1);
}

int main()
{

  ifstream arquivo;
  arquivo.open("text.txt");
  char ch;

  string linha;
  vector<string> nbs;

  if (arquivo.is_open())
  {
    while (getline(arquivo, linha))
    {
      cout << linha << endl;
      split(linha, ' ', nbs);
    }
  }

  int maior = 0;

  for (int i = 0; i < 1000; i++)
  {
    cout << nbs[i] << endl;
    // if (maior < stoi(nbs[i]))
    // {
    //   maior = stoi(nbs[i]);
    // }
  }
  cout << "O maior número " << maior << endl;
}
