#include <iostream>
using namespace std;

/*
1- Faça um programa que receba a idade deseja, salve em uma variável e imprima essa idade recebida

2- Inclua uma estrutura condicional (if) para verificar se a idade é maior ou menor que 18 anos

3- Altere o programa com if e else, or ou and para refletir a regra da votação e teste todas as condições (<16, entre 16 e 18, entre 18 e 70, maior que 70)

4- Altere esse programa para perguntar ao usuário se ele deseja inserir uma nova idade ou encerrar o programa. Crie um laço de repetição que execute tudo novamente se for informado uma nova idade ou encerre o programa se for pedido o encerramento. Combine com o usuário, por exemplo, de informar uma idade negativa para encerrar o programa.

O que deve ser entregue? O códio fonte do programa com extensão .cpp. Não entregar word ou pdf pois a avaliação da tarefa será feita compilando o código.
*/

int recive_age(int age)
{
  cout << "Você tem " << age << " anos." << endl;

  if (age < 16)
  {
    cout << "Você não pode votar ainda." << endl;
  }
  else if (age >= 16 && age < 18)
  {
    cout << "Você já pode votar, se quiser." << endl;
  }
  else if (age >= 18 && age <= 70)
  {
    cout << "Você deve votar, caso não possa, procure o posto eleitoral mais próximo para justificar seu voto." << endl;
  }
  else if (age > 70)
  {
    cout << "Você não é mais obrigado a votar." << endl;
  }
  return 0;
}

int main()
{
  int age;
  bool option = true;

  while (option == true)
  {
    cout << "Verifique sua condição eleitotral de acordo com sua idade, digite sua idade: " << endl;
    cin >> age;

    recive_age(age);

    cout << "Deseja consultar novamente?[y/N]" << endl;
    char choice;
    cin >> choice;

    if (choice == 'n' || choice == 'N')
    {
      option = false;
      cout << "PROGRAMA FINALIZADO" << endl;
    }
    else if (choice == 'y' || choice == 'Y')
    {
      option = option;
    }
    else
    {
      while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
      {
        cout << "Opção Inválida, digite 'y' ou 'n'" << endl;
        cin >> choice;
      }
    }
  }
  return 0;
}
