/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas(int startLayer)
{
	couches[startLayer].etat = ETATACTIF;
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
   
	activeLayer = STARTINGLAYER;
	return true;
}

bool Canevas::activerCouche(int index)
{
	if(activeLayer != NOACTIVELAYERS)
	{
		couches[activeLayer].etat = ETATINACTIF;
	}
	couches[index].etat = ETATACTIF;
	activeLayer = index;
	return true;
}

bool Canevas::cacherCouche(int index)
{
   if(activeLayer == index)
   {
   	activeLayer = NOACTIVELAYERS;
   }
	couches[index].etat = ETATCACHE;
	return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   if(activeLayer == NOACTIVELAYERS){return false;}
	couches[activeLayer].VecteurFormesCouche.addElement(p_forme);
	return true;
}

bool Canevas::retirerForme(int index)
{
   if(activeLayer == NOACTIVELAYERS){return false;}
	couches[activeLayer].VecteurFormesCouche.delElement(index);
	return true;
}

double Canevas::aire()
{
   double aire_totale = 0.0;
	if(activeLayer == NOACTIVELAYERS){return -1.0;}	//Vibe Check xD.
	for(int i;i<couches[activeLayer].VecteurFormesCouche.getTaille();i++)
   {
      aire_totale += couches[activeLayer].VecteurFormesCouche.getPointeur(i)->aire();
   }
   return aire_totale;
}

bool Canevas::translater(int deltaX, int deltaY)
{
	if(activeLayer == NOACTIVELAYERS){return false;}	//Gestion d'érreur.
	for(int i;i<couches[activeLayer].VecteurFormesCouche.getTaille();i++)
   {
      couches[activeLayer].VecteurFormesCouche.getPointeur(i)->translater(deltaX,deltaY);
   }
   return true;
}

void Canevas::afficher(ostream & s)
{
	if(activeLayer == NOACTIVELAYERS){}	//Gestion d'erreur.
	else
	{
		for(int y;y<MAX_COUCHES;y++)
		{
			cout << "----- Couche " << y << endl;
			switch(couches[y].etat)
			{
				case ETATINITIAL:
					cout << "Couche initialisee" << endl;
					break;
				case ETATCACHE:
					cout << "Couche cachee" << endl;
					break;
				default:
					for(int i;i<couches[y].VecteurFormesCouche.getTaille();i++)
					{
						couches[y].VecteurFormesCouche.getPointeur(i)->afficher(cout);
					}
					break;
			}
		}
		//y and i are temporary. But DOOM is ETERNAL!!!
	}
}


