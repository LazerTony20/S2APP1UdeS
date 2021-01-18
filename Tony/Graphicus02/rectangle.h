/********
 * Fichier: rectangle.h
 * Auteurs: Anthony Royer et Guillaume Beaudoin
 * Date: 17 janvier 2021 (creation)
 * Description: Declaration de classe rectangle.
********/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "forme.h"

class Rectangle:public Forme
{
public:
	//Constructeur
	Rectangle(int rectlargeur = 1, int recthauteur = 1); //on met les =1 afin d'avoir des valeurs par défaut pour mon constructeur
	//Destructeur
	~Rectangle();
	
	//Méthodes
	double aire() = 0;
	int getLargeur();
	int getHauteur();
	void setDimensions(int newLargeur, int newHauteur);
	void afficher(ostream & s);
private:
	//Variables
	int largeur;
	int hauteur;
};


#endif




