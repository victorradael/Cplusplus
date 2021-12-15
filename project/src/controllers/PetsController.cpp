#include <iostream>
#include "../global/pets/petsServices.h"
using namespace std;

void registerPet()
{
  string name;
  string petOwnerEmail;
  string gender;
  string age;

  cout << "Digite o email do dono do pet:" << endl;
  cin >> petOwnerEmail;

  cout << "Digite o nome do pet:" << endl;
  cin >> name;

  cout << "Selecione o sexo do pet:" << endl;
  cin >> gender;

  cout << "Digite a idade do pet:" << endl;
  cin >> age;

  createPet(petOwnerEmail, name, gender, age);
  return;
}