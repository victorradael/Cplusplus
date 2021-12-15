#include <iostream>
#include "../global/users/usersServices.h"
using namespace std;

void registerUser()
{
  string name;
  string email;
  string phoneNumber;
  string condition;

  cout << "Digite seu email:" << endl;
  cin >> email;
  condition = checkIfUserExists(email);
  if (condition != "NOT FOUND")
  {
    cout << "USER ALREADY EXISTS!" << endl;
    cout << "Use another email address to register a new user." << endl;
    return;
  }

  cout << "Digite seu nome:" << endl;
  cin >> name;

  cout << "Digite seu numero de telefone:" << endl;
  cin >> phoneNumber;

  createUser(email, name, phoneNumber);
  return;
}