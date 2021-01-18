#include "carre.h"

Carre::Carre(int cote)
{
	hauteur = cote;
	largeur = cote;
}

Carre::~Carre()
{
	
}

void Carre::afficher(ostream & s)
{
	cout << "carre(x= " << ancrage.x << ", y=" << ancrage.y << ", l=" << largeur << ", h=" << hauteur << ", aire=" << aire() << ")" << endl;
}

void Carre::setDimensions(int cote)
{
	hauteur = cote;
	largeur = cote;
}
