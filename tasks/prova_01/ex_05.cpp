#include <iostream>

using namespace std;

int main()
{

  string palavras[50];

  string palavra;

  for (int i = 0; i < 50; i++)
  {
    cout << "Coloque a palavra " << i + 1 << " :";
    cin >> palavras[i];
  }

  cout << "Digite a palavra que deseja saber o número de ocorrências: ";
  cin >> palavra;

  int contador = 0;

  for (int i = 0; i < 50; i++)
  {
    if (palavra == palavras[i])
    {
      contador++;
    }
  }
  cout << "Repete " << contador << " vezes." << endl;
}
