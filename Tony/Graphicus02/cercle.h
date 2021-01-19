/********
 * Fichier: cercle.h
 * Auteurs: Anthony Royer et Guillaume Beaudoin
 * Date: 18 janvier 2021 (creation)
 * Description: Declaration de classe cercle.
********/

#ifndef CERCLE_H
#define CERCLE_H

#include <iostream>
#include "forme.h"

class Cercle:public Forme
{
public:
	//Constructeur
	Cercle(int reyon = 1); //on met les =1 afin d'avoir des valeurs par défaut pour mon constructeur
	//Destructeur
	~Cercle();
	
	//Méthodes
	double aire();
	int getRayon();
	void setDimensions(int newRayon);
	void afficher(ostream & s);
private:
	//Variables
	int rayon;
};


#endif




