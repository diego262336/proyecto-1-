#ifndef VEHICULO_H
#define VEHICULO_H
#include<string>
using namespace std;
class vehiculo
{
    protected:
        string license;
        int year;

    public:
        vehiculo();
        ~vehiculo();
        vehiculo(string mylicense, int myyear): license(mylicense), year(myyear)
        {
        }
        const string getDesc() const {return license + " from " + "stringify(year)";}

        const string getlicense() const {return license;}
        const int getyear() const {return year;}


};
class car : public vehiculo{
    string style;

public:
    car();
    car( string mylicense, int myyear, string mystyle): vehiculo(mylicense, myyear), style(mystyle)
    {
    }
    const string getDesc()
    {
        return /*stringify(year) + ' ' +*/ style + ": " + license ;
    }
    const string getstyle() {return style;}
};


#endif // VEHICULO_H
