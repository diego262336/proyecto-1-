#ifndef PERSONA_H
#define PERSONA_H
#include <string.h>
#include "Birthday.h"
#include <iostream>

using namespace std;

class Persona
{
    protected:
        string nombre;
        string lugar;
        Birthday cump;
    public:
        Persona(const string &suNombre, const string &eLugar, Birthday cal);
        ~Persona();
        virtual string getDat();
        virtual int getEdad();


};

#endif // PERSONA_H
