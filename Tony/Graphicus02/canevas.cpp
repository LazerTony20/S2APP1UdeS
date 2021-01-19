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
   return 0.0;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return true;
}

void Canevas::afficher(ostream & s)
{
}


