#include <iostream>
#include "../global/users/usersServices.h"
using namespace std;

void registerUser()
{
  string name;
  string email;
  string password;
  string phoneNumber;

  cout << "Digite seu nome:" << endl;
  cin >> name;

  cout << "Digite seu email:" << endl;
  cin >> email;

  cout << "Digite sua senha:" << endl;
  cin >> password;

  cout << "Digite seu numero de telefone:" << endl;
  cin >> phoneNumber;

  createUser(email, name, phoneNumber);
  return;
}