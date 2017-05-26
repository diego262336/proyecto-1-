#include <iostream>
#include <math.h>
#include <Vector.h>
using namespace std;

int main()
{
    Vector vec;
    vec.start.x = 3.0, vec.start.y = 2.0, vec.endo.x = 3.0, vec.endo.y = 4.0 ;
    vec.impri();
    cout << vec.dista();

}
