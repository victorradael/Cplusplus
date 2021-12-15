#include <iostream>
#include <fstream>
#include <list>
#include "../global/pets/pet.h"
using namespace std;

int petSaveInDb(Pet pet)
{
  ifstream inFile("./documents/registers.csv");

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
  outFile.open("./documents/pets_db.csv");
  outFile.is_open();
  if (!outFile)
  {
    cout << "Arquivo register.csv nao pode ser aberto" << endl;
    abort();
  }

  for (auto const &line : lines)
  {
    outFile << line << '\n';
  }

  outFile << pet.petOwnerEmail << ";" << pet.name << ";" << pet.gender << pet.age << '\n';
  outFile.close();

  return 0;
}