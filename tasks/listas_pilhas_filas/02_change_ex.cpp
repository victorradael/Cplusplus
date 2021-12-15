#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Produto
{
  string nome;
  int quantidade;
  string marca;
  float preco;
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

vector<Produto> carregaRegistros()
{
  vector<Produto> R;
  string linha;
  ifstream arquivo;
  Produto T;
  int count = 0;
  arquivo.open("agenda.csv");
  if (arquivo.is_open())
  {
    while (getline(arquivo, linha))
    {
      cout << linha << '\n';
      count++;
      string S[5];
      split(linha, ',', S);
      T.nome = S[0];
      T.quantidade = stoi(S[1]);
      T.marca = S[2];
      T.preco = stof(S[3]);
      R.push_back(T);
    }
    arquivo.close();
  }
  else
  {
    cout << "Unable to open file";
  }
  return R;
}

void salvaRegistros(vector<Produto> R)
{
  ofstream arquivo;
  arquivo.open("agenda.csv", ios::trunc);
  for (int i = 0; i < R.size(); i++)
  {
    arquivo << R[i].nome << "," << R[i].quantidade
            << "," << R[i].marca << ","
            << R[i].preco << "," << endl;
  }
  arquivo.close();
}

Produto criarRegistro()
{
  Produto P;

  cout << "Preencha os Valores" << endl;
  cout << "Nome do produto: ";
  cin >> P.nome;
  cout << "Marca do produto: ";
  cin >> P.marca;
  cout << "Quantidade do produto: ";
  cin >> P.quantidade;
  cout << "Preço do produto: ";
  cin >> P.preco;

  return P;
}

vector<Produto> removerRegistro(string nomeDoProduto, vector<Produto> Produtos)
{
  vector<Produto> T;
  T = Produtos;

  for (int i = 0; i < T.size(); i++)
  {
    if (nomeDoProduto == T[i].nome)
    {
      T.erase(T.begin() + i);
    }
  }

  return T;
}

int main()
{
  vector<Produto> R;
  string nomdeDoProduto;
  Produto produto;

  R = carregaRegistros();

  produto = criarRegistro();
  R.push_back(produto);

  cout << "Digite o nome do produto que deseja remover: ";
  cin >> nomdeDoProduto;

  R = removerRegistro(nomdeDoProduto, R);

  salvaRegistros(R);
  return 0;
}