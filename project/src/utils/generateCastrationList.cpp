#include <iostream>
#include <fstream>
#include <stack>
#include <list>
#include "../global/pets/pet.h"
#include "../global/tools.h"
using namespace std;

void generateCastrationList()
{
  ifstream inFile("./documents/pets_db.csv");

  string line;
  list<string> lines;

  if (inFile.is_open())
  {

    while (getline(inFile, line))
    {
      lines.push_front(line);
    }
  }
  inFile.close();

  ofstream outFile;
  outFile.open("./documents/castration_list.csv");
  outFile.is_open();
  if (!outFile)
  {
    cout << "Arquivo castration_list.csv nao pode ser aberto" << endl;
    abort();
  }
  int n = lines.size();
  stack<Pet> superMegaStack[n];
  Item agesB[n];
  Item agesA[n];
  string auxArr[4];

  for (auto const &line : lines)
  {
    split(line, ';', auxArr);
    Pet pet;
    pet.petOwnerEmail = auxArr[0];
    pet.name = auxArr[1];
    pet.gender = auxArr[2];
    pet.age = auxArr[3];
    superMegaStack->push(pet);
  }

  QuickSort(agesB, &n);
  Testa(agesB, &n);
  Copia(agesA, agesB, &n);

  for (int i = 0; i < superMegaStack->size(); i++)
  {
    Pet pet;
    pet = superMegaStack->top();
    superMegaStack->pop();
    outFile << pet.petOwnerEmail << ";" << pet.name << ";" << pet.gender << ";" << pet.age << endl;
  }

  outFile.close();

  return;
}