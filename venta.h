#ifndef VENTA_H
#define VENTA_H
#include <string>

using std::string;


class Venta
{
    string celular;
    string precio,total;
    int codigo;
public:
    Venta(string,string,string,int);
    ~Venta();
    string toString()const;
};

#endif // VENTA_H
