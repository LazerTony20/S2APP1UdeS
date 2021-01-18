/********
 * Fichier: rectangle.h
 * Auteur: Guillaume Beaudoin
 * Date: 16 janvier 2021 (creation)
 * Description: Declaration des classes de rectangles. La
 *    Ce fichier fait partie de la distribution de Graphicus.
********/
#include "forme.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Forme
{
	public:
		//Constructeur
		Rectangle(int h = 1, int l = 1);
		//Destructeur
		~Rectangle();
		//Fonction du calcul de l'air du rectangle (Override de la fonction air de forme).
		double aire();
		//affiche les informations de l'objet (override de la méthode de forme).
		void afficher(ostream & s);
		//Ajuste les paramètres de largeur et hauteur du rectangle.
		void setDimensions(int l, int h);
		//Cherche la largeur ou la hauteur.
		int getLargeur();
		int getHauteur();
	protected:
		//variables de dimensions.
		int hauteur;
		int largeur;
};

#endif
