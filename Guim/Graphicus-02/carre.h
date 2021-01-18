#include "rectangle.h"

class Carre : public Rectangle
{
	public:
		//Constructeur
		Carre(int cote = 1);
		//Destructeur
		~Carre();
		//affiche les informations de l'objet (override de la méthode de forme).
		void afficher(ostream & s);
		//Ajuste les paramètres de largeur et hauteur du carré.
		void setDimensions(int cote);
};
