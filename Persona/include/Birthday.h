#ifndef BIRTHDAY_H
#define BIRTHDAY_H


class Birthday
{
    private:
        int dia;
        int mes;
        int anio;
    public:
        Birthday();
        Birthday(const int myDia, const int myMes, const int myAnio);
        int edad();

};

#endif // BIRTHDAY_H
