#include <iostream>
#include <vector>
using namespace std;
void heapify(vector<int> &V, int i)
{
  int maior = i;            // Inicializa o maior como raiz
  int esquerda = 2 * i + 1; // esquerda = 2*i + 1
  int direita = 2 * i + 2;  // direita = 2*i + 2
  // Se o filho a esquerda eh maior que a raiz
  if (esquerda < i && V[esquerda] > V[maior])
    maior = esquerda;
  // Se o filho a direita eh maior que a raiz
  if (direita < i && V[direita] > V[maior])
    maior = direita;
  // Se o maior nao eh a raiz
  if (maior != i)
  {
    swap(V[i], V[maior]);
    // Chama recursivamente na subarvore
    heapify(V, i);
  }
}
// main function to do heap sort
void heapSort(vector<int> &V)
{
  // Constroi o heap
  for (int i = V.size() / 2 - 1; i >= 0; i--)
    heapify(V, i);
  // Extrai os elementos do heap, um a um
  for (int i = V.size() - 1; i >= 0; i--)
  {
    // Move a raiz corrente para o final
    swap(V[0], V[i]);
    heapify(V, i);
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
  heapSort(V);
  for (int i = 0; i < V.size(); i++)
    cout << V[i] << endl;
  return 0;
}