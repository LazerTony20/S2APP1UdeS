
#include "rectangle.h"

Rectangle::Rectangle(int h, int l)
{
	hauteur = h;
	largeur = l;
}

Rectangle::~Rectangle(){}

double Rectangle::aire()
{
	return hauteur*largeur;
}

void Rectangle::setDimensions(int h, int l)
{
	hauteur = h;
	largeur = l;
}

void Rectangle::afficher(ostream & s)
{
	cout << "hi" << endl;
}
