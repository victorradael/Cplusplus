#include <iostream>
#include "../../global/tools.h"
#include "../../global/pets/pet.h"
using namespace std;

void createPet(string email, string name, string gender, string age)
{
  Pet pet;
  pet.petOwnerEmail = email;
  pet.name = name;
  pet.gender = gender;
  pet.age = age;

  petSaveInDb(pet);

  return;
}