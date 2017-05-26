#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string.h>

using namespace std;

class Vehiculo
{
protected:
    string license;
    string year;
public:
    Vehiculo(const string &myLicense, const string myYear);
    const string getDesc();
    const string &getLicense();
    const int getYear();

};

#endif // VEHICULO_H
