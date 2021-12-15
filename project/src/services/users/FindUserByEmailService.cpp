#include <iostream>
#include "../../global/tools.h"
using namespace std;

User findUserByEmail(string email)
{
  User user;
  user = returnStructUserFromDb(email);

  return user;
}