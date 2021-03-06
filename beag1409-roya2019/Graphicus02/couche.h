/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H

#include "forme.h"
#include "vecteur.h"

#define ETATINITIAL 0
#define ETATINACTIF 1
#define ETATACTIF 2
#define ETATCACHE 3


class Couche
{
   // Classe a completer
  public:
  	Couche(int initialState = ETATINITIAL);
  	~Couche();
  	
  	//Variables
  	int etat;
  	Vecteur VecteurFormesCouche;
};

#endif
