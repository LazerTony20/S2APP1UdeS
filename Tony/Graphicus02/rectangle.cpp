/********
 * Fichier: rectangle.cpp
 * Auteurs: Guillaume Beaudoin et Anthony Royer
 * Date: 18 janvier 2021 (creation)
 * Description:Implementation des methodes des classes decrites dans
 *    rectangle.h 
 *    
********/

#include "rectangle.h"

//Code du constructeur.
Rectangle::Rectangle(int rectlargeur, int recthauteur)
{
	largeur = rectlargeur;
	hauteur = recthauteur;
}

//Code du destructeur.
Rectangle::~Rectangle()
{
	//i am inevitable
}

//Code de la méthode aire pour calculer l'aire.
double Rectangle::aire()
{
	return largeur*hauteur;
}

//Code pour obtenir la largeur.
int Rectangle::getLargeur()
{
	return largeur;
}

//Code pour obtenir la hauteur.
int Rectangle::getHauteur()
{
	return hauteur;
}

//Code pour définir de nouvelles dimensions.
void Rectangle::setDimensions(int newLargeur, int newHauteur)
{
	largeur = newLargeur;
	hauteur = newHauteur;
}

//Fonction d'affichage.
void Rectangle::afficher(ostream & s)
{
	cout << "Rectangle(x=" << ancrage.x << ", y=" << ancrage.y << ", l=" << largeur << ", h=" << hauteur << ", aire=" << aire() << ")" << endl;
}
