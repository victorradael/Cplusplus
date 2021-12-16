#include <iostream>
#include "../../global/tools.h"
#include "../../global/users/user.h"
using namespace std;

void updatePetService(string email, string petName, string field, int option)
{

  string response;
  response = alterPetData(email, petName, field, option);
  cout << response << endl;

  return;
}
