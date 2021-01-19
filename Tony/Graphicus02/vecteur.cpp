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
	
	if(taille >= capacite)
	{
		int capTemp = (capacite*2);
		augmenteCapacite(capTemp);
		cout << capacite << endl;
		cout << taille << endl;
		pointerVector[taille] = newElement;
		taille ++;
		return true;
	}else if(taille < capacite){
		pointerVector[taille] = newElement;
		taille ++;
		return true;
	}else{
		return false;
	}
	
}

//Méthode pour retirer des éléments
bool Vecteur::delElement(int index)
{
	if(index >= capacite){
		return false;
	}else if(index >= taille){
		return true;
	}else{
		for(int i = index; i < taille-1; i++)
		{
			pointerVector[i] = pointerVector[i+1];
		}
		taille --;
		delete pointerVector[taille];
		return true;
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
		cout << "Capacité à augmenter: " << newCapacite << endl;
		for(int i=0;i < taille;i++)
		{
			cout << "02 - " << i << endl;
			tempVector[i] = pointerVector[i];
			//delete pointerVector[i];
		}
		capacite = newCapacite;
		pointerVector = new Forme* [capacite];
		cout << "Capacité augmentée: " << capacite << endl;
		for(int i=0;i < taille;i++)
		{
			cout << "04 - " << i << endl;
			pointerVector[i] = tempVector[i];
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













