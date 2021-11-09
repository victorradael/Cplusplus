#include <iostream>
#include <vector>
using namespace std;
void insercao(vector<int> &V)
{
  for (int i = 1; i < V.size(); i++)
  {
    int escolhido = V[i];
    int j = i - 1;
    for (j; (j >= 0) && (V[j] > escolhido); j--)
    {
      V[j + 1] = V[j];
    }
    V[j + 1] = escolhido;
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
  insercao(V);
  for (int i = 0; i < V.size(); i++)
  {
    cout << V[i] << endl;
  }
  return 0;
}