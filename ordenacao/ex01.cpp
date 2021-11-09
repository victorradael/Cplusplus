#include <iostream>
#include <vector>
using namespace std;

void selecao(vector<int> &V)
{
  int menor;
  for (int i = 0; i < V.size(); i++)
  {
    menor = i;
    for (int j = i + 1; j < V.size(); j++)
    {
      if (V[j] < V[menor])
        menor = j;
    }
    swap(V[i], V[menor]);
  }
}

int main()
{
  int i, x;
  vector<int> V;
  for (i = 0; i < 10; i++)
  {
    cin >> x;
    V.push_back(x);
  }
  selecao(V);
  for (int i = 0; i < V.size(); i++)
  {
    cout << V[i] << endl;
  }
  return 0;
}