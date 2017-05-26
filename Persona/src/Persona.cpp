#include "Persona.h"
#include <iostream>
#include <string.h>
#include "Birthday.h"

using namespace std;

Persona::Persona(const string &suNombre,const string &eLugar, Birthday cal)
{
    cump = cal;
    nombre = suNombre;
    lugar = eLugar;

}
Persona::~Persona()
{
    cout << "Fue raptado y no se sabe nade de Él";
}
string Persona::getDat()
{
    return nombre, lugar;
}
int Persona::getEdad()
{
    return cump.edad();
}
