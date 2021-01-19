/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"


void Tests::tests_unitaires_formes()
{
   // Tests sur les formes geometriques
	//Test Rectangle
	Rectangle Rectangle1;
	Rectangle1.afficher(cout);
	Rectangle1.setDimensions(3,5);
	Rectangle1.translater(2,3);
	Rectangle1.afficher(cout);
	//Test Carre
	Carre Carre1;
	Carre1.afficher(cout);
	Carre1.setCote(5);
	Carre1.translater(2,3);
	Carre1.afficher(cout);
	//Test Cercle
	Cercle Cercle1;
	Cercle1.afficher(cout);
	Cercle1.setDimensions(5);
	Cercle1.translater(2,3);
	Cercle1.afficher(cout);
	
}

void Tests::tests_unitaires_vecteur()
{
   // Tests sur la classe Vecteur
	Vecteur Vecteur1;
	Vecteur1.augmenteCapacite(5);
	Cercle Cercle2;
	Vecteur1.addElement(new Cercle());
	Vecteur1.addElement(new Rectangle());
	Vecteur1.addElement(new Cercle());
	for(int i=0;i < Vecteur1.getTaille();i++)
	{
		cout << Vecteur1.getPointeur(i) << endl;
	}
	
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
	cout << "===========================" << endl;
   tests_unitaires_vecteur();
	cout << "===========================" << endl;
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
	cout << "===========================" << endl;
   tests_application_cas_02();
   cout << "===========================" << endl;
	tests_unitaires();
	
	
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl; 
   // Il faut ajouter les operations realisant ce scenario de test.
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
