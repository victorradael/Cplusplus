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

void findPetsByUser()
{
  string email;
  cout << "Digite o email do usuario desejado: ";
  cin >> email;
  findPetsByOwnerEmail(email);
}

void updatePet()
{
  string email;
  string petName;
  string condition;
  list<Pet> petList;

  cout << "Digite o email do dono do pet:" << endl;
  cin >> email;

  condition = checkIfUserExists(email);
  if (condition == "NOT FOUND")
  {
    cout << "USER NOT EXISTS!" << endl;
    cout << "Use a valid email." << endl;
    return;
  }
  int binaryCondition = 1;
  cout << "Digite o nome do pet:" << endl;
  cin >> petName;
  petList = findPetsByOwnerEmail(email);
  for (auto const &pet : petList)
  {
    if (pet.name == petName)
    {
      binaryCondition = 0;
    }
  }

  if (binaryCondition == 1)
  {
    cout << "Este usuario nao possui pet com esse nome." << endl;
    return;
  }

  int option;
  string field;

  cout << "Digite o digito correspondente ao campo que deseja alterar:" << endl;
  cout << "1- Nome do Pet" << endl;
  cout << "2- Genero do Pet" << endl;
  cout << "3- Idade do Pet" << endl;
  cout << "--------> Digite: ";
  cin >> option;
  switch (option)
  {
  case 1:
    field = "name";
    break;

  case 2:
    field = "gender";
    break;

  case 3:
    field = "age";
    break;

  default:
    field = "na";
    break;
  }
  updatePetService(email, petName, field, option);
  return;
}