#include <iostream>
#include <string>
using namespace std;

class cumple
{
    int dia;
    int mes;
    int year;
public:
    cumple(){
    dia=0;
    mes=0;
    year=0;
    }
    cumple(int a,int m,int d)
    {
        dia=d;
        mes=m;
        year=a;
    }
    int edad(int actual)
    {
        return actual -year ;
    }

};


class persona
{
protected:
    cumple nacimiento;
    string nombre;
    string sexo;
public:
    persona();
    persona(cumple c, string nom, string sex){
    nacimiento=c;
    nombre=nom;
    sexo=sex;
    }
    virtual void mostrarDatos(){};
};



class gerente : public persona
{
    int oficina;

public:
    gerente();
    gerente(cumple e, string nomb, string se, int o) :persona(e,nomb,se), oficina(o) {}
    void mostrarDatos()
    {
        cout<<"edad :"<<e<<endl;
        cout<<"nombre :"<<nomb<<endl;
        cout<<"sexo :"<<sex<<endl;
        cout<<"numero de oficina :"<<o<<endl;
    }

};

class conserge : public persona
{
public:
    conserge();

};


void mostrarDatos()
{

}


int main()
{

}
