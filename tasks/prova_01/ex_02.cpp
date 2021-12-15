#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> meuVetor;

  if (meuVetor.empty())
    cout << "Vetor vazio!" << endl;
  else
    cout << "Vetor com elementos!" << endl;

  meuVetor.push_back(7); // inclue no fim do vetor um elemento
  meuVetor.push_back(11);
  meuVetor.push_back(2006);

  for (int i = 0; i < meuVetor.size(); i++)
    cout << "Imprimindo o vetor...: " << meuVetor[i] << endl;

  cout << endl;
  meuVetor.pop_back();

  meuVetor.insert(meuVetor.begin() + 2, 3); //Insere o numero 3 na terceira posição

  for (int i = 0; i < meuVetor.size(); i++)
    cout << "Meu vetor, de novo...: " << meuVetor[i] << endl;

  return 0;
}