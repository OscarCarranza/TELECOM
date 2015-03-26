#ifndef EMPRESAS_H
#define EMPRESAS_H
#include "Corporativo.h"
#include "Cliente.h"
#include <string>

class Empresas:public Corporativo{
	string tipo;
	double fac_mensual;
public:
	Empresas(string,string,string,unsigned int,int,string,string,string,double);
	Empresas(const Empresas&);
	string toString()const;
    string type()const;
};
#endif
