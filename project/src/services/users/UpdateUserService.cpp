#include <iostream>
#include "../../global/tools.h"
#include "../../global/users/user.h"
using namespace std;

void updateUser(string email, string field, int option)
{

  string response;
  response = alterUserData(email, field, option);
  cout << response << endl;

  return;
}
