#include "Muneco.h"

Muneco::Muneco(const string &suMarca, const string &elMaterial, const string &elColor, const string &myModelo):Juguete(suMarca, elMaterial, elColor), Muneco(myModelo){}
string Muneco::getDesc()
{
    return (marca , " " , material , " " , color , " " ,modelo);
}
string Muneco:: getMod()
{
    return modelo;
}
