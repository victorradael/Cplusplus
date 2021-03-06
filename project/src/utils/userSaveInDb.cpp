#include <iostream>
#include <fstream>
#include <list>
#include "../global/users/user.h"
using namespace std;

int userSaveInDb(User user)
{
  ifstream inFile("./documents/users_db.csv");

  string line;
  list<string> lines;
  int count = 0;

  if (inFile.is_open())
  {

    while (getline(inFile, line))
    {
      lines.push_front(line);
    }
  }
  inFile.close();

  ofstream outFile;
  outFile.open("./documents/users_db.csv");
  outFile.is_open();
  if (!outFile)
  {
    cout << "Arquivo users_db.csv nao pode ser aberto" << endl;
    abort();
  }

  for (auto const &line : lines)
  {
    outFile << line << '\n';
  }

  outFile << user.email << ";" << user.name << ";" << user.phoneNumber << '\n';
  outFile.close();

  return 0;
}