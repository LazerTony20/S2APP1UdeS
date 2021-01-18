#include "cercle.h"

Cercle::Cercle(int r)
{
	rayon = r;
}

Cercle::~Cercle()
{
	//i am inevitable
}

double Cercle::aire()
{
	return rayon*rayon*3.1416;
}

void Cercle::setDimensions(int r)
{
	rayon = r;
}

int Cercle::getRayon()
{
	return rayon;
}

void Cercle::afficher(ostream & s)
{
	cout << "Cercle(x= " << ancrage.x << ", y=" << ancrage.y << ", r=" << rayon << ", aire=" << aire() << ")" << endl;
}
