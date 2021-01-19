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
	activerCouche(0);
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
	for(int i=0;i<MAX_COUCHES;i++)
   {
      delete &couches[i];
      couches[i] = Couche(INITIALISE);
   }
   activerCouche(0);
   return true;
}

bool Canevas::activerCouche(int index)
{
	for(int i;i<MAX_COUCHES;i++)	//Désactive les couches actives.
   {
      if(couches[i].etat == ACTIF)
      {
      	couches[i].etat = INACTIF;
      }
   }
	couches[index].etat = ACTIF;	//Active la couche voulue.
   return true;
}

bool Canevas::cacherCouche(int index)
{
	couches[index].etat = CACHE;	//Cache la couche voulue.
   return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
	int couche_active = getActif();
	if(couche_active < 0){return false;}	//Gestion d'érreur.
	couches[couche_active].l_formes.add(p_forme);
   return true;
}

bool Canevas::retirerForme(int index)
{
	int couche_active = getActif();
	if(couche_active < 0){return false;}	//Gestion d'érreur.
	couches[couche_active].l_formes.del(index);
   return true;
}

double Canevas::aire()
{
	double aire_totale = 0.0;
	int couche_active = getActif();
	if(couche_active < 0){return -1.0;}	//Gestion d'érreur.
	for(int i;i<couches[couche_active].l_formes.getSize();i++)
   {
      aire_totale += couches[couche_active].l_formes.get(i)->aire();
   }
   return aire_totale;
}

bool Canevas::translater(int deltaX, int deltaY)
{
	int couche_active = getActif();
	if(couche_active < 0){return false;}	//Gestion d'érreur.
	for(int i;i<couches[couche_active].l_formes.getSize();i++)
   {
      couches[couche_active].l_formes.get(i)->translater(deltaX,deltaY);
   }
   return true;
}

void Canevas::afficher(ostream & s)
{
	int couche_active = getActif();
	if(couche_active < 0){}	//Gestion d'érreur.
	else
	{
		for(int y;y<MAX_COUCHES;y++)
		{
			cout << "----- Couche " << y << endl;
			switch(couches[y].etat)
			{
				case INITIALISE:
					cout << "Couche initialisee" << endl;
					break;
				case CACHE:
					cout << "Couche cachee" << endl;
					break;
				default:
					for(int i;i<couches[y].l_formes.getSize();i++)
					{
						couches[couche_active].l_formes.get(i)->afficher(cout);
					}
					break;
			}
		}
	}
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
   return -1;
}
