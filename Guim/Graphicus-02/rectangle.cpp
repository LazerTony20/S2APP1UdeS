
#include "rectangle.h"

Rectangle::Rectangle(int h, int l)
{
	hauteur = h;
	largeur = l;
}

Rectangle::~Rectangle()
{
	//i am inevitable
}

double Rectangle::aire()
{
	return hauteur*largeur;
}

void Rectangle::setDimensions(int h, int l)
{
	hauteur = h;
	largeur = l;
}

int Rectangle::Rectangle::getHauteur()
{
	return hauteur;
}

int Rectangle::Rectangle::getLargeur()
{
	return largeur;
}

void Rectangle::afficher(ostream & s)
{
	cout << "Rectangle(x= " << ancrage.x << ", y=" << ancrage.y << ", l=" << largeur << ", h=" << hauteur << ", aire=" << aire() << ")" << endl;
}
