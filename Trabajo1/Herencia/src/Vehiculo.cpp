#include "Vehiculo.h"

Vehiculo::Vehiculo(const string &myLicense, const int myYear)
{
    license = myLicense, year = myYear;
}

const string Vehiculo::getDesc() const
{
    return license + "from" + year;
}
const string Vehiculo:: &getLicense() const
{
    return license;
}
const int Vehiculo::getYear() const
{
    return year;
}
