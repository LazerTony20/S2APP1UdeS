/********
 * Fichier: vecteur.h
 * Auteurs: Anthony Royer et Guillaume Beaudoin
 * Date: 18 janvier 2021 (creation)
 * Description: Declaration des classes de vecteurs.
********/

#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>

#include "forme.h"
#define DEFAULTCAPACITE 1

class Vecteur
{
public:
	Vecteur(int capVect = DEFAULTCAPACITE);
	~Vecteur();
	bool addElement(Forme* newElement);
	bool augmenteCapacite(int newCapacite);
	Forme* getPointeur(int indaxe);
	int getTaille();	
	int getCapacite();
	bool purge();
private:
	int taille = 0;
	int capacite;
	Forme** pointerVector; 
};

#endif
