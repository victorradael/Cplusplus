#include <iostream>
#include "../../global/tools.h"
using namespace std;

list<Pet> findPetsByOwnerEmail(string email)
{
  list<Pet> listOfPets;
  string showArrPet[4];
  listOfPets = returnStructPetsListFromDb(email);

  for (auto const &pet : listOfPets)
  {
    cout << "Nome do Pet: " << pet.name << endl;
    cout << "Genero do Pet: " << pet.gender << endl;
    cout << "Idade do Pet: " << pet.age << " ano(s)" << endl;
  }

  return listOfPets;
}
