#ifndef COMPLEJO_H
#define COMPLEJO_H


class Complejo
{
    private:
        double real, imagine;
    public:
        double getreal();
        double getimagine();
        Complejo(double x, double y);
        Complejo suma(Complejo Num2);
        void impri();


};

#endif // COMPLEJO_H
