#include "Zoo.h"


Zoo::Zoo(int c)
{
  nombre = 0;
  capacite = c;
  les_animaux = new Animal *[capacite];
  for (int i = 0 ; i < capacite ; i++)
      les_animaux[i] = NULL;
}
Zoo::~Zoo()
{
	
}

void Zoo::afficher()
{
   cout << "========================" << endl;
   cout << "Voici le contenu du Zoo." << endl;
   cout << "------------------------" << endl;

   for (int i = 0 ; i < nombre ; i++)
   {  cout << i << ".- ";
	  les_animaux[i]->presenter();
      les_animaux[i]->parler();
      cout << "------------------------" << endl;
   }
   cout << "========================" << endl;   
}


int Zoo::ajouter_animal(Animal *a)   //Ajoute un animal au Zoo
{
   cout << "==========Nous allons ajouter un animal ...." << endl;
   return 0;
}
   
void Zoo::doubler_capacite()
{
	cout << "==========Nous allons doubler la capacite...." << endl;
    return;

}   
   

   
   Animal* Zoo::get_animal(int i)       //Retourne l'animal à une position specifique
   {
	   return les_animaux[i];
   }
