#include "Birthday.h"
Birthday::Birthday()
{

}

Birthday::Birthday(const int myDia, const int myMes, const int myAnio)
{
    dia = myDia;
    mes = myMes;
    anio = myAnio;
}

int Birthday::edad()
{
    return 2017 - anio;
}
