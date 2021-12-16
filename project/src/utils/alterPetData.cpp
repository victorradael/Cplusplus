#include <iostream>
#include <fstream>
#include <list>
#include "../global/tools.h"
using namespace std;

string alterPetData(string email, string petName, string field, int option)
{
  string dbPath;
  dbPath = "./documents/pets_db.csv";

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

  string petUpdateArrLine[3];
  ofstream outFile;
  outFile.open("./documents/pets_db.csv");
  outFile.is_open();
  if (!outFile)
  {
    cout << "Arquivo pets_db.csv nao pode ser aberto" << endl;
    abort();
  }
  string modification;
  for (auto const &line : lines)
  {
    split(line, ';', petUpdateArrLine);
    if (petUpdateArrLine[0] == email && petUpdateArrLine[1] == petName)
    {
      cout << "Usuario" << email << endl;
      cout << "Digite a alteracao que deseja fazer no " << field << " do " << petName << " :";
      cin >> modification;
      petUpdateArrLine[option] = modification;
      outFile << petUpdateArrLine[0] << ";" << petUpdateArrLine[1] << ";" << petUpdateArrLine[2] << ";" << petUpdateArrLine[3] << endl;
    }
    else
    {
      outFile << line << '\n';
    }
  }
  outFile.close();

  return "Alterado com sucesso.";
}