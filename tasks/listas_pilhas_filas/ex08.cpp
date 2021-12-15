#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
struct Registro
{
  string nome;
  string telefone1;
  string telefone2;
  string endereco;
  string email;
};
void split(string linha, char at, string S[])
{
  int pos = 0, fim, i = 0;
  do
  {
    fim = linha.find(at, pos);
    if (fim == -1) // Ultimo campo
      S[i] = linha.substr(pos);
    else // Primeiro ao penúltimo campo
      S[i++] = linha.substr(pos, fim - pos);
    pos = fim + 1;
  } while (fim != -1);
}
void carregaRegistros(vector<Registro> &R)
{
  string linha;
  ifstream arquivo;
  Registro T;
  arquivo.open("agenda.csv");
  if (arquivo.is_open())
  {
    while (getline(arquivo, linha))
    {
      cout << linha << '\n';
      string S[5];
      split(linha, ',', S);
      T.nome = S[0];
      T.telefone1 = S[1];
      T.telefone2 = S[2];
      T.endereco = S[3];
      T.email = S[4];
      R.push_back(T);
    }
    arquivo.close();
  }
  else
  {
    cout << "Unable to open file";
  }
}
void salvaRegistros(vector<Registro> R)
{
  ofstream arquivo;
  arquivo.open("agenda.csv", ios::trunc);
  for (int i = 0; i < R.size(); i++)
  {
    arquivo << R[i].nome << "," << R[i].telefone1
            << "," << R[i].telefone2 << ","
            << R[i].endereco << "," << R[i].email
            << endl;
  }
  arquivo.close();
}
int main()
{
  vector<Registro> R;
  carregaRegistros(R);
  salvaRegistros(R);
  return 0;
}