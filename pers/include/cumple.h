#ifndef CUMPLE_H
#define CUMPLE_H
#include<iostream>
using namespace std;
class cumple
{
public:
    int dia;
    int mes;
    int year;

    cumple(){
        dia=0;
        mes=0;
        year=0;
    }

    cumple(int d, int m, int y)
    {
        dia=d;
        mes=m;
        year=y;
    }
    int edad()
    {
        int actual=2017-year;
        return actual;
    }
};

#endif // CUMPLE_H
