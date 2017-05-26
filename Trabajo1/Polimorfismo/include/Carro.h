#ifndef CARRO_H
#define CARRO_H
#include <string.h>
#include "Juguete.h"
#include <iostream>

using namespace std;


class Carro: public Juguete
{
    public:
        string modelo;
        string base;
        Carro(const string &myMarca, const string &elMaterial, const string &elColor, const string &elModelo, const string &basado);
        string getDesc();
        string getDat();
};

#endif // CARRO_H
