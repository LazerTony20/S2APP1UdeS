#ifndef CHIEN_H
#define CHIEN_H

#include <iostream>
#include <string> 
#include "Animal.h"

using namespace std;

class Chien: public Animal
{
  public:
    Chien(string n);
    void parler();
}; 
#endif
