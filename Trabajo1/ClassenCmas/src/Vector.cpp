#include <iostream>
#include "Vector.h"
#include <math.h>
using namespace std;


void Vector::impri()
{
    cout << "Start: ";
    start.imprime();
    cout << endl;
    cout << "End: ";
    endo.imprime();
    cout << endl;
}
double Vector::dista(){
    double a = start.x, b = start.y, c = endo.x, d = endo.y;
    cout << "Distancia: ";
    return sqrt((pow(c-a,2) + pow(d-b,2)));
}
