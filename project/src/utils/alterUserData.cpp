#include <iostream>
#include <fstream>
#include <list>
#include "../global/tools.h"
using namespace std;

string alterUserData(string email, string field, int option)
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
      lines.push_front(line);
    }
  }
  inFile.close();

  string updateArrLine[3];
  ofstream outFile;
  outFile.open("./documents/users_db.csv");
  outFile.is_open();
  if (!outFile)
  {
    cout << "Arquivo users_db.csv nao pode ser aberto" << endl;
    abort();
  }
  string modification;
  for (auto const &line : lines)
  {
    split(line, ';', updateArrLine);
    if (updateArrLine[0] == email)
    {
      cout << "Digite a alteracao que deseja fazer no " << field << endl;
      cout << "do usuario" << email << endl;
      cout << "Digite a alteracao que deseja fazer: ";
      cin >> modification;
      updateArrLine[option] = modification;
      outFile << updateArrLine[0] << ";" << updateArrLine[1] << ";" << updateArrLine[2] << endl;
    }
    else
    {
      outFile << line << '\n';
    }
  }
  outFile.close();

  return "Alterado com sucesso.";
}