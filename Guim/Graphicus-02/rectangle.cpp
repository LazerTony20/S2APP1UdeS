
#include "rectangle.h"

Rectangle::Rectangle(int h, int l)
{
	hauteur = h;
	largeur = l;
}

Rectangle::~Rectangle(){
	//i am inevitable
}

double Rectangle::aire()
{
	return h*l;
}

void Rectangle::setDimensions(int h, int l)
{
	hauteur = h;
	largeur = l;
}

void Rectangle::afficher(ostream & s)
{
	cout << "hi, i am rectangle, how are you" << endl;
}
