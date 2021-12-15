#include <iostream>
#include "../../global/tools.h"
#include "../../global/users/user.h"
using namespace std;

void createUser(string email, string name, string phoneNumber)
{
  User user;
  user.email = email;
  user.name = name;
  user.phoneNumber = phoneNumber;

  userSaveInDb(user);

  return;
}
