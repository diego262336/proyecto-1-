#include "Car.h"


Car::Car(const string &myLicense, const string &myYear, const string &myStyle): Vehiculo(myLicense, myYear), style(myStyle) {}
const string Car::&getStyle()
{
    return style;
}
