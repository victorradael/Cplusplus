#include <iostream>
#include "../../global/tools.h"
using namespace std;

string checkIfUserExists(string email)
{

  string response;
  response = verifyIfEmailExists(email);

  return response;
}
