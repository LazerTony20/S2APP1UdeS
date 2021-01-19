/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"

Couche::Couche(int _etat_init)
{
	etat = _etat_init;
}
Couche::~Couche()
{
	delete &l_formes;
}
