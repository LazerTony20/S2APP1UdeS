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
	Rectangle Rectangle1 (3,5);	//Test des paramètres du constructeur.
	Rectangle1.afficher(cout);
	//Rectangle1.setDimensions(3,5);
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
	cout << "Taille:" << endl;
	cout << Vecteur1.getTaille() << endl;
	cout << "Adresses:" << endl;
	for(int i=0;i < Vecteur1.getTaille();i++)
	{
		cout << Vecteur1.getPointeur(i) << endl;
	}
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
   Couche couche_test;
   couche_test.VecteurFormesCouche.addElement(new Rectangle(1,2));
   couche_test.VecteurFormesCouche.addElement(new Cercle(9));
   couche_test.VecteurFormesCouche.addElement(new Carre(4));
   couche_test.VecteurFormesCouche.addElement(new Cercle(80));
   cout << couche_test.VecteurFormesCouche.getTaille() << endl;
   couche_test.VecteurFormesCouche.getPointeur(0)->afficher(cout);
   couche_test.VecteurFormesCouche.getPointeur(1)->afficher(cout);
   couche_test.VecteurFormesCouche.getPointeur(2)->afficher(cout);
   couche_test.VecteurFormesCouche.getPointeur(3)->afficher(cout);
   cout << couche_test.etat << endl;
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
   cout << "===========================" << endl;
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
   Canevas canvas (0);
   canvas.ajouterForme(new Carre(4));
   canvas.ajouterForme(new Rectangle());
   canvas.ajouterForme(new Carre(2));
   canvas.ajouterForme(new Cercle(5));
   cout << "Init formes" << endl;
   canvas.afficher(cout);
   cout << "Translation" << endl;
   canvas.translater(5,5);
   cout << "Retirer forme #3" << endl;
   canvas.retirerForme(3);
   cout << "Aire: " << canvas.aire() << endl;
   canvas.afficher(cout);
   cout << "Réinitialisation" << endl;
   canvas.reinitialiser();
   canvas.afficher(cout);
   canvas.activerCouche(3);
   cout << "Activer couche: 3" << endl;
   canvas.ajouterForme(new Carre(7));
   cout << "Init forme" << endl;
   cout << "Cacher couche: 3" << endl;
   canvas.cacherCouche(3);
   canvas.activerCouche(1);
   cout << "Activer couche: 1" << endl;
   canvas.afficher(cout);
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
