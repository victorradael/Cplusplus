#include <iostream>
#include <fstream>
#include <list>
#include "../global/tools.h"
using namespace std;

string verifyIfEmailExists(string email)
{
  cout << "Searching by email " << email << " ..." << endl;

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
  inFile.close();

  if (lines.size() == 0)
  {
    cout << "NOT FOUND " << email << endl;
    return "NOT FOUND";
  }
  cout << "FOUND " << email << endl;
  return email;
}