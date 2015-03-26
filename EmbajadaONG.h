#ifndef EMBAJADAONG_H
#define EMBAJADAONG_H
#include "Corporativo.h"
#include "Cliente.h"
#include <string>

using std::string;

class EmbajadaONG:public Corporativo{
	int tipo; //1 == embajada --- 2 == ong
	string caracteristica; // embajada(pais) ---- ONG(beneficiaros)
	int descuento;
    string cod;
public:
	EmbajadaONG(string,string,string,unsigned int,int,string,string,int,string,int);
	EmbajadaONG(const EmbajadaONG&);
	string toString()const;
    string type()const;
    virtual string code();
};
#endif
