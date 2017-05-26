#include <iostream>

using namespace std;

int main()
{ /*
    float radio;
    float a;
    float pi = 3.1416;
    cout << "Ingrese el radio: " ;
    cin >> radio;
    a = radio*radio* pi;
    cout << a << endl;
    float ladito;
    cout << "Ingrese el valor para ladito: ";
    cin >> ladito ;
    a = ladito *ladito;
    cout << a << endl;
    float base, altura;
    cout << "Ingrese el valor para base : ";
    cin >> base ;
    cout << "Ingrese el valor para altura : ";
    cin >> altura ;
    a = base* altura/2;
    cout << a << endl;
    */
    float a ,b,c;
    int s;
    cout << "Ingrese el valor de a : ";
    cin >> a;
    cout << "Ingrese el valor de b : ";
    cin >> b;
     cout << "Ingrese el valor de c : ";
    cin >> c;
    /* funcion swap
    cout << "El valor de a es :" << a <<" y el de b es: " << b << endl ;
    s = a;
    a = b;
    b = s;
    cout << "El valor de a es :" << a <<" y el de b es: " << b<< endl;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << "El valor de a es :" << a <<" y el de b es: " << b<< endl;
    if (a >= b)
        cout << a << endl;
    else
        cout << b << endl;
    */
    if (a >= b){
        if (a >= c)
            cout << a << endl ;
    }
    else if(b > c) {
            cout << b << endl;
    }
    else
        cout << c << endl;



    return 0;

}
