#include "vector.h"

Vecteur::Vecteur();
{
	listePforme = new Forme*[capacite];
	taille = 0;
}

Vecteur::~Vecteur();
{
	purge();
}

bool Vecteur::add(Forme* f);
{
	if(taille < capacite)
	{
		listePforme[taille] = f;
	}
	else
	{
		Forme** m_tampon = new Forme*[capacite];
		for(int i=0;i<taille;i++)
		{
			m_tampon[i] = listePforme[i];
			delete listePforme[i];
		}
		capacite *= 2;
		listePforme = new Forme*[capacite];
		for(int i=0;i<taille;i++)
		{
			listePforme[i] = m_tampon[i];
			delete m_tampon[i];
		}
		listePforme[taille] = f;
	}
	taille++;
	return true;
}

Forme* Vecteur::get(int index);
{
	return listePforme[index];
}

bool Vecteur::purge();
{
	for(int i=0;i<capacite;i++)
	{
		delete listePforme[i];
	}
	capacite = 0;
	taille = 0;
	return true;
}

int Vecteur::getSize();
{
	return taille;
}

int Vecteur::getCapacity();
{
	return capacite;
}

bool Vecteur::del(int index)
{
	if(index < taille)
	{
		delete listePforme[index];
		for(int i=index;i<taille-1;i++)
		{
			listePforme[i] = listePforme[i+1];
		}
		taille--;
		delete listePforme[taille];	//Élimine l'éccédent du tableau.
		return true;
	}else if(index >= taille && index < capacite)
	{
		return true;
	}else
	{return false;}
}

