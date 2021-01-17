/********
 * Fichier: rectangle.h
 * Auteur: Guillaume Beaudoin
 * Date: 16 janvier 2021 (creation)
 * Description: Declaration des classes de rectangles. La
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

//#include "forme.h"

class Rectangle : Forme
{
	public:
		Rectangle(int h = 1, int l = 1);
		~Rectangle();
		double aire();
		void afficher(ostream & s);
		void setDimensions(int l, int h);
		int hauteur;
		int largeur;
};
