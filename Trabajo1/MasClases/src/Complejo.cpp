#include "Complejo.h"
#include <iostream>

using namespace std;
Complejo::Complejo(double x, double y)
{
    real = x;
    imagine = y;
}

double Complejo::getreal(){return real;}
double Complejo::getimagine(){return imagine;}
Complejo Complejo::suma(Complejo Num2){
    double r = real, w = Num2.real;
    double i = imagine, t = Num2.imagine;
    double a = r + w;
    double b = i + t;
    Num2.real = a,Num2.imagine = b;
    return Num2;
}
void Complejo:: impri(){
    cout <<"(" << real << "," << imagine<< ")";
}

