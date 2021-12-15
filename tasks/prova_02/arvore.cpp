#include <iostream>
#include <stdio.h>
// #include <conio.h>
using namespace std;

struct cel
{
  int conteudo;
  struct cel *esq;
  struct cel *dir;
};
typedef struct cel no;
typedef no *arvore;

void inserir(arvore &r, int c)
{
  if (r == NULL)
  {
    r = new no;
    r->conteudo = c;
    r->esq = NULL;
    r->dir = NULL;
  }
  else
  {
    if (c < r->conteudo)
      inserir(r->esq, c);
    else
      inserir(r->dir, c);
  }
}

void red(arvore r)
{
  if (r != NULL)
  {
    cout << "\n"
         << r->conteudo;
    red(r->esq);
    red(r->dir);
  }
}

void edr(arvore r)
{
  if (r != NULL)
  {
    edr(r->esq);
    edr(r->dir);
    cout << "\n"
         << r->conteudo;
  }
}

void erd(arvore r)
{
  if (r != NULL)
  {
    erd(r->esq);
    cout << "\n"
         << r->conteudo;
    erd(r->dir);
  }
}

void dre(arvore r)
{
  if (r != NULL)
  {
    dre(r->dir);
    cout << "\n"
         << r->conteudo;
    dre(r->esq);
  }
}

int altura(arvore r)
{
  if (r == NULL)
    return -1;
  else
  {
    int he = altura(r->esq);
    int hd = altura(r->dir);
    if (he > hd)
      return he + 1;
    else
      return hd + 1;
  }
}

int main()
{
  arvore r;
  r = NULL;
  inserir(r, 11);
  inserir(r, 8);
  inserir(r, 23);
  inserir(r, 5);
  inserir(r, 9);
  inserir(r, 10);
  inserir(r, 7);
  inserir(r, 25);
  inserir(r, 4);
  inserir(r, 20);
  cout << "\n\nPre-Ordem\n";
  red(r);
  cout << "\n\nPos-Ordem\n";
  edr(r);
  cout << "\n\nOrdem crescente\n";
  erd(r);
  cout << "\n\nOrdem decrescente\n";
  dre(r);
  cout << "\nAltura:" << altura(r);
  // getch();
}