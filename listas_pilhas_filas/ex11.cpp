#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack<int> Pilha;
  for (int i = 0; i < 5; i++)
  {
    cout << "Entrou " << i << " na pilha" << endl;
    Pilha.push(i);
  }
  while (!Pilha.empty())
  {
    int x = Pilha.top();
    cout << "Saiu " << x << " da pilha" << endl;
    Pilha.pop();
  }
  return 0;
}