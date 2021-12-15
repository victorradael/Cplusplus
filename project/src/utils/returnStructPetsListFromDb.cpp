#include <iostream>
#include <fstream>
#include <list>
#include "../global/tools.h"
using namespace std;

list<Pet> returnStructPetsListFromDb(string email)
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
      split(line, ';', arrLine);
      if (arrLine[0] == email)
      {
        lines.push_front(line);
      }
    }
  }
  Pet pet;
  list<Pet> listOfPets;

  string petArrLine[4];

  for (auto const &line : lines)
  {
    split(line, ';', arrLine);
    pet.petOwnerEmail = arrLine[0];
    pet.name = arrLine[1];
    pet.gender = arrLine[2];
    pet.age = arrLine[3];
    listOfPets.push_back(pet);
  }

  return listOfPets;
}