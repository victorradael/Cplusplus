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
  string arrLine[4];
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

  string userArrLine[4];

  for (auto const &line : lines)
  {
    split(line, ';', arrLine);
    user.email = arrLine[0];
    user.name = arrLine[1];
    user.phoneNumber = arrLine[2];
  }

  return user;
}