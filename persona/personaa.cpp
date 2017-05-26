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
private:
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
    gerente(int e, string nomb, string se, int o) :persona(nacimiento,nombre,sexo), oficina(o) {}
    void mostrarDatos()
    {
        cout<<"edad :"<<nacimiento<<endl;
        cout<<"nombre :"<<nombre<<endl;
        cout<<"sexo :"<<sexo<<endl;
        cout<<"numero de oficina :"<<oficina<<endl;
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
