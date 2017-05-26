#ifndef MUNECO_H
#define MUNECO_H
#include "Juguete.h"
#include <iostream>
#include <string.h>

using namespace std;

class Muneco : public Juguete
{
    public:
        string modelo;
        Muneco(const string &suMarca ,const string &elMaterial ,const string &elColor ,const string &myModelo);
        virtual string getDesc();
        string getMod();
};

#endif // MUNECO_H
