#ifndef CONSERJE_H
#define CONSERJE_H
#include <iostream>
#include <string.h>
#include "Persona.h"

using namespace std;


class Conserje: public Persona
{
    public:
        string institu;
        Conserje(const string &myNombre, const string &eLugar, Birthday cal, const string &institu);
        virtual ~Conserje();
        string getDat();
        int getEdad();

};

#endif // CONSERJE_H
