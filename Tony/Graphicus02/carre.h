/********
 * Fichier: carre.h
 * Auteurs: Anthony Royer et Guillaume Beaudoin
 * Date: 17 janvier 2021 (creation)
 * Description: Declaration de classe carre.
********/

#ifndef CARRE_H
#define CARRE_H

#include <iostream>
#include "rectangle.h"

class Carre:public Rectangle
{
public:
	//Constructeur
	Carre(int coter = 1); //on met les =1 afin d'avoir des valeurs par défaut pour mon constructeur
	//Destructeur
	~Carre();
	
	//Méthodes
	double aire() = 0;
	int getCote();
	void setCote(int newCote);
	void afficher(ostream & s);
private:
	//Variables
	int cote;
};

#endif
