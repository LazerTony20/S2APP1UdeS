/********
 * Fichier: carre.cpp
 * Auteurs: Guillaume Beaudoin et Anthony Royer
 * Date: 18 janvier 2021 (creation)
 * Description:Implementation des methodes des classes decrites dans
 *    carre.h
 *    
********/

#include "carre.h"


//Code du constructeur.
Carre::Carre(int coter)
{
	cote = coter;
}

//Code du destructeur.
Carre::~Carre()
{
	//i am inevitable
}

//Code de la méthode aire pour calculer l'aire.
double Carre::aire()
{
	return cote*cote;
}

//Code pour obtenir la largeur.
int Carre::getCote()
{
	return cote;
}

//Code pour définir de nouvelles dimensions.
void Carre::setCote(int newCote)
{
	cote = newCote;
}

//Fonction d'affichage.
void Rectangle::afficher()
{
	cout << "Carre (x=" << ancrage.x << ", y=" << ancrage.y << ", c=" << cote << ", aire=" << aire() << ")" << endl;
}


