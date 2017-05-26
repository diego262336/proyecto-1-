#ifndef JUGUETE_H
#define JUGUETE_H
#include <string.h>
#include <iostream>

using namespace std;


class Juguete
{
    protected:
        string marca;
        string material;
        string color;
    public:
        Juguete(const string &laMarca, const string &elMaterial, const string &elColor);
        virtual string getDesc();
        string getMat();

};

#endif // JUGUETE_H
