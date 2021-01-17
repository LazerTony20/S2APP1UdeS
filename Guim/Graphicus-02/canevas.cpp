/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas()
{
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
	for(int i;i<MAX_COUCHES;i++)
   {
      delete &couches[i];
      couches[i] = Couche(INITIALISE);
   }
   return true;
}

bool Canevas::activerCouche(int index)
{
	couches[index].etat = ACTIF;
   return true;
}

bool Canevas::cacherCouche(int index)
{
	couches[index].etat = CACHE;
   return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
	int couche_active = getActif();
   return true;
}

bool Canevas::retirerForme(int index)
{
	int couche_active = getActif();
   return true;
}

double Canevas::aire()
{
	int couche_active = getActif();
	//couches[couche_active];
   return 0.0;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return true;
}

void Canevas::afficher(ostream & s)
{
	
}

int Canevas::getActif()
{
	for(int i;i<MAX_COUCHES;i++)
   {
      if(couches[i].etat == ACTIF)
      {
      	return i;
      }
   }
   return 255;
}
