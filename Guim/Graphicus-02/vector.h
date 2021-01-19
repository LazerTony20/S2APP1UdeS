#ifndef VECTOR_H
#define VECTOR_H
#include "forme.h"

#define TAILLE_DEPART 2

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
		bool del(int index);
	private:
		Forme** listePforme;
		int taille;
		int capacite = TAILLE_DEPART;
};

#endif
