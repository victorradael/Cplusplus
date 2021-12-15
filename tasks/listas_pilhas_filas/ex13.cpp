#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack<int> operandos;
  stack<string> leitura;
  string lido;
  do
  {
    cin >> lido;
    leitura.push(lido);
  } while (lido != "=");
  leitura.pop(); // Retira o = da pilha
  while (!leitura.empty())
  {
    lido = leitura.top();
    leitura.pop();
    if (lido == "=")
      break;
    else if (lido == "+")
    {
      int op1 = operandos.top();
      operandos.pop();
      int op2 = operandos.top();
      operandos.pop();
      operandos.push(op1 + op2);
    }
    else
    {
      operandos.push(atoi(lido.c_str()));
    }
  }
  cout << operandos.top();
  return 0;
}