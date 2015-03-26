#ifndef PREPAGO_H
#define PREPAGO_H
#include <string>
#include "Cliente.h"
#include "Particulares.h"

class Prepago: public Particulares{
	bool paquete_internet;
	double saldo_disponible;
    string cod;
public:
	Prepago(string,string,string,unsigned int,unsigned int,bool,double);
	Prepago(const Prepago&);
	virtual string toString()const;
	double getSaldoDisponible()const;
	void ingresarRecarga(double);
    string type()const;
    virtual string code();
};
#endif
