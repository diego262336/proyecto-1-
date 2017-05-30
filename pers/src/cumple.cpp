#include "cumple.h"
#include <iostream>
using namespace std;

class persona{
public:
    string nombre;
    cumple cumpleanios;
public:
    persona();
    persona(string n, cumple c): nombre(n), cumpleanios(c)
    {

    }
    ~persona()
    {

    }
    virtual void imprimir(){};


};

class gerente: public persona
{
    int oficina ;
public:
    gerente(string n, cumple b,int o): persona(n,b), oficina(o)
    {
    }
    void imprimir(){
        cout<<nombre<<" "<<oficina<<" "<<cumpleanios.edad();
    }
};

class conserje: public persona{
    int sotano;
public:
    conserje(string n, cumple b, int s):persona(n,b), sotano(s)
    {

    }
    void imprimir()
    {
        cout<<nombre<<" "<<sotano<<" "<<cumpleanios.edad();
    }
};

int main()
{

    persona *arr_persona[2];

    arr_persona[0]= new gerente("Jose", cumple(23,6,1997),5);
    arr_persona[1]= new conserje("Pool", cumple(17,3,1995), 1);
    arr_persona[0]->imprimir();
    cout<<endl;
    arr_persona[1]->imprimir();
    return 0;


}

