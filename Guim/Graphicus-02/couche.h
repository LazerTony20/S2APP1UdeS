/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/
#include "forme.h"
#include "vector.h"

#ifndef COUCHE_H
#define COUCHE_H
//États possibles d'une couche.
#define INITIALISE 	0
#define INACTIF 		1
#define ACTIF 			2
#define CACHE 			3

class Couche
{
   public:
   Couche(int _etat_init = INITIALISE);	//Constructeur.
   ~Couche();	//Destructeur.
   
   int etat;
   Vecteur l_formes;
};

#endif
