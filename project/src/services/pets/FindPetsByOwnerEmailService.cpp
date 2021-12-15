#include <iostream>
#include "../../global/tools.h"
using namespace std;

list<Pet> findPetsByOwnerEmail(string email)
{
  list<Pet> listOfPets;
  listOfPets = returnStructPetsListFromDb(email);

  return listOfPets;
}
