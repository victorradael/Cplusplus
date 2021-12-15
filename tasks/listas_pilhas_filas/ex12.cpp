#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack<int> operandos;
  string lido;
  do
  {
    cin >> lido;
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
  } while (lido != "=");
  cout << operandos.top();
  return 0;
}