#include "Carro.h"

Carro::Carro(const string &myMarca,const  string &elMaterial, const string &elColor, const string &elModelo, const string &basado):Juguete(myMarca, elMaterial, elColor),Carro(elModelo, basado){}
string Carro::getDesc()
{
    return marca ," ", material ," ", color , " " , modelo , " " , basado
}
string Carro::getDat()
{
    return modelo , basado;
