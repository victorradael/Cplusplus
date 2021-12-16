#include <iostream>
#include "../../global/tools.h"
using namespace std;

User findUserByEmail(string email)
{
  User user;
  user = returnStructUserFromDb(email);

  cout << "E-mail: " << user.email << endl;
  cout << "Nome: " << user.name << endl;
  cout << "Numero de telefone: " << user.phoneNumber << endl;

  return user;
}