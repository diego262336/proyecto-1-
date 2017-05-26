#ifndef CAR_H
#define CAR_H
#include <string.h>
#include "Vehiculo.h"
#include <iostream>

using namespace std;

class Car:public Vehiculo
{
private:
    string style;
public:
    Car(const string &myLicense, const string &myYear, const string &myStyle);
    const string &getStyle();
};

#endif // CAR_H
