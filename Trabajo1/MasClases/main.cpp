#include <iostream>
#include <Complejo.h>

using namespace std;

int main()
{
    double a = 3.0, b =4.0, c = 5.0, d = 2.0;
    Complejo RT(a,b);
    Complejo RW(c,d);
    Complejo RQ = RT.suma( RW);
    RQ.impri();
}
