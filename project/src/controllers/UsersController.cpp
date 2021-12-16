#include <iostream>
#include "../global/users/usersServices.h"
using namespace std;

void registerUser()

{
  string name;
  string email;
  string phoneNumber;
  string condition;

  cout << "Digite o email do usuario:" << endl;
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

void updateUser()
{
  string email;
  string condition;

  cout << "Digite o email do dono do pet:" << endl;
  cin >> email;
  condition = checkIfUserExists(email);
  if (condition == "NOT FOUND")
  {
    cout << "USER NOT EXISTS!" << endl;
    cout << "Use a valid email." << endl;
    return;
  }

  int option;
  string field;
  string newValue;

  cout << "Digite o digito correspondente ao campo que deseja alterar:" << endl;
  cout << "1- Nome" << endl;
  cout << "2- Numero de Telefone" << endl;
  cout << "--------> Digite: ";
  cin >> option;
  switch (option)
  {
  case 1:
    field = "name";
    break;

  case 2:
    field = "phoneNumber";
    break;

  default:
    field = "na";
    break;
  }

  updateUser(email, field, option);
  return;
}

void findUser()
{
  string email;
  cout << "Digite o email do usuario desejado: ";
  cin >> email;
  findUserByEmail(email);
}