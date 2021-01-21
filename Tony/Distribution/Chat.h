#ifndef CHAT_H
#define CHAT_H

#include <iostream>
#include <string> 
#include "Animal.h"

using namespace std;

class Chat: public Animal
{
  public: 
    Chat(string n);
    void parler();
    
};
#endif
