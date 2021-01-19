/********
 * Fichier: cercle.cpp
 * Auteurs: Guillaume Beaudoin et Anthony Royer
 * Date: 18 janvier 2021 (creation)
 * Description:Implementation des methodes des classes decrites dans
 *    cercle.h 
 *    
********/

#include "cercle.h"

//Code du constructeur.
Cercle::Cercle(int reyon)
{
	rayon = reyon;
}

//Code du destructeur
Cercle::~Cercle()
{
}

//Cote pour renvoyer le rayon
int Cercle::getRayon()
{
	return rayon;
}

//Code de la méthode aire pour calculer l'aire.
double Cercle::aire()
{
	return rayon*rayon*3.1416;
}

//Code pour redimensionner le cercle
void Cercle::setDimensions(int newRayon)
{
	rayon = newRayon;
}

//Code pour afficher
void Cercle::afficher(ostream & s)
{
	s << "Cercle (x=" << ancrage.x << ", y=" << ancrage.y << ", r=" << rayon << ", aire=" << aire() << ")" << endl;
}



