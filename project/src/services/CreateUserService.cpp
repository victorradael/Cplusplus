#include <iostream>
#include "../utils/saveIntoFile.cpp"
#include "../user.h"
using namespace std;

void createUser(string name, string email, string password, string phoneNumber)
{
  User user;
  user.name = name;
  user.email = email;
  user.password = password;
  user.phoneNumber = phoneNumber;

  saveIntoFile(user);

  return;
}
