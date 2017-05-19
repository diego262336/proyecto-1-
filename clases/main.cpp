#include <iostream>
#include "vehiculo.h"


using namespace std;

int main()
{
    car carro1("lic", 2015, "marca");

    cout<<carro1.getDesc() << endl;
    return 0;
}
