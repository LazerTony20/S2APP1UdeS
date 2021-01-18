/********
 * Fichier: vecteur.cpp
 * Auteurs: Guillaume Beaudoin et Anthony Royer
 * Date: 18 janvier 2021 (creation)
 * Description:Implementation des methodes des classes decrites dans
 *    vecteur.h
 *    
********/

#include "vecteur.h"

//Code du constructeur.
Vecteur::Vecteur(int capVect)
{
	capacite = capVect;
	pointerVector = new Forme* [capacite];
}

//Code du destructeur
Vecteur::~Vecteur()
{
	purge();
}

//méthode d'ajout d'un élément
bool Vecteur::addElement(Forme* newElement)
{
	taille ++;
	if(taille > capacite)
	{
		augmenteCapacite(capacite*2);
		pointerVector[taille] = newElement;		
		return true;
	}else if(taille <= capacite){
		pointerVector[taille] = newElement;	
		return true;
	}else{
		return false;
	}
	
}

//méthode pour augmenter la taille d'un tableau
bool Vecteur::augmenteCapacite(int newCapacite)
{
	if(newCapacite <= taille)
	{
		return false;
	}else{
		Forme** tempVector = new Forme* [capacite];
		for(int i=0;i < taille;i++)
		{
			tempVector[i] = pointerVector[i];
			delete pointerVector[i];
		}
		capacite = newCapacite;
		pointerVector = new Forme* [capacite];
		for(int i=0;i < taille;i++)
		{
			pointerVector[i] = tempVector[i];
			delete tempVector[i];
		}
		return true;
	}
}


//méthode pour get un pointeur
Forme* Vecteur::getPointeur(int indaxe)
{
	return pointerVector[indaxe];
}


//méthode pour retourner la taille
int Vecteur::getTaille()
{
	return taille;
}

//méthode pour retourner la capacité
int Vecteur::getCapacite()
{
	return capacite;
}

//méthode de PURGE
bool Vecteur::purge()
{
	//tous les crimes sont autorisé pour les 24 prochaines heures...
	for(int i=0;i < capacite;i++)
		{
			delete pointerVector[i];
		}
	capacite = DEFAULTCAPACITE;
	taille = 0;
	return true;
}













