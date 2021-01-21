#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string> 

using namespace std;

class	Animal
{
  private:
    string nom;
 	
  public: 
    Animal();
    virtual ~Animal();
    string get_nom();
    virtual void presenter();
    virtual void parler();
    virtual void set_nom(string n);
    
}; 
#endif
