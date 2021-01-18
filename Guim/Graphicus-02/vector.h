#include "forme.h"
#define TAILLE_DEPART 2

#ifndef VECTOR_H
#define VECTOR_H

class Vecteur
{
	public:
		Vecteur();
		~Vecteur();
		bool add(Forme* f);
		Forme* get(int index);
		bool purge();
		int getSize();
		int getCapacity();
	protected:
		Forme** listePforme;
		int taille;
		int capacite = TAILLE_DEPART;
};

#endif
