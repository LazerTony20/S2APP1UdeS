#include "forme.h"

#ifndef CERCLE_H
#define CERCLE_H

class Cercle : public Forme
{
	public:
		//Constructeur
		Cercle(int r = 1);
		//Destructeur
		~Cercle();
		//Fonction du calcul de l'air du rectangle (Override de la fonction air de forme).
		double aire();
		//affiche les informations de l'objet (override de la méthode de forme).
		void afficher(ostream & s);
		//Ajuste les paramètres de rayon.
		void setDimensions(int r);
		//Cherche le rayon.
		int getRayon();
	protected:
		//variables de dimensions.
		int rayon;
};

#endif
