#include <iostream>
#include <queue>
using namespace std;
int main()
{
  queue<int> fila;
  for (int i = 0; i < 5; i++)
  {
    cout << "Entrou " << i << " na fila" << endl;
    fila.push(i);
  }
  while (!fila.empty())
  {
    int x = fila.front();
    cout << "Saiu " << x << " da fila" << endl;
    fila.pop();
  }
  return 0;
}