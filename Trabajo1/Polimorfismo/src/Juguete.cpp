#include "Juguete.h"

Juguete::Juguete(const string &laMarca, const string &elMaterial, const string &elColor)
{
    marca = laMarca;
    material = elMaterial;
    color = elColor;
}
virtual string Juguete::getDesc()
{
    return (marca , material , color);
}
string Juguete::getMat()
{
    return material;
}
