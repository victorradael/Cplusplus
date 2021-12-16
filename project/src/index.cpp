#include <iostream>
#include "./global/appControllers.h"
using namespace std;

int main(int argc, char const *argv[])
{
     char state = 's';
     while (state == 's')
     {
          int option;

          cout << "-----------------------------" << endl;
          cout << "| "
               << "1- Registar Usuario      "
               << " |" << endl;
          cout << "| "
               << "2- Buscar Usuario        "
               << " |" << endl;
          cout << "| "
               << "3- Editar Usuario        "
               << " |" << endl;
          cout << "-----------------------------" << endl;
          cout << "| "
               << "4- Registar Pet          "
               << " |" << endl;
          cout << "| "
               << "5- Editar Pet            "
               << " |" << endl;
          cout << "| "
               << "6- Buscar Pets do Usuario"
               << " |" << endl;
          cout << "-----------------------------" << endl;
          cout << endl;
          cout << "Digite o numero correspondente a atividade que deseja executar: ";
          cin >> option;

          switch (option)
          {
          case 1:
               registerUser();
               break;
          case 2:
               findUser();
               break;
          case 3:
               updateUser();
               break;

          case 4:
               registerPet();
               break;

          default:
               break;
          }

          cout << "Deseja fazer outra operacao(s/n): ";
          cin >> state;
     }

     return 0;
}
