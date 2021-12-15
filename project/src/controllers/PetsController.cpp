#include <iostream>
#include "../global/pets/petsServices.h"
#include "../global/users/usersServices.h"
using namespace std;

void registerPet()
{
  string name;
  string petOwnerEmail;
  string gender;
  string age;

  string condition;

  cout << "Digite o email do dono do pet:" << endl;
  cin >> petOwnerEmail;
  condition = checkIfUserExists(petOwnerEmail);
  if (condition == "NOT FOUND")
  {
    cout << "USER NOT EXISTS!" << endl;
    cout << "Use a valid email to register a pet." << endl;
    return;
  }

  cout << "Digite o nome do pet:" << endl;
  cin >> name;

  cout << "Selecione o sexo do pet:" << endl;
  cin >> gender;

  cout << "Digite a idade do pet:" << endl;
  cin >> age;

  createPet(petOwnerEmail, name, gender, age);
  return;
}