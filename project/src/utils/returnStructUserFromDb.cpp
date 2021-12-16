#include <iostream>
#include <fstream>
#include <list>
#include "../global/tools.h"
using namespace std;

User returnStructUserFromDb(string email)
{
  string dbPath;
  dbPath = "./documents/users_db.csv";

  ifstream inFile(dbPath);

  string line;
  string arrLine[3];
  list<string> lines;
  int count = 0;

  if (inFile.is_open())
  {

    while (getline(inFile, line))
    {
      split(line, ';', arrLine);
      if (arrLine[0] == email)
      {
        lines.push_front(line);
      }
    }
  }
  User user;
  string UserArrLine[3];
  for (auto const &line : lines)
  {
    split(line, ';', UserArrLine);
    user.email = UserArrLine[0];
    user.name = UserArrLine[1];
    user.phoneNumber = UserArrLine[2];
  }

  return user;
}