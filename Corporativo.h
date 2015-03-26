#ifndef CORPORATIVO_h
#define CORPORATIVO_h
#include "Cliente.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class Corporativo:public Cliente{
	int num_lineas;
	string contact, contact_job;
    vector<int> lineas;
public:
	Corporativo(string,string,string,unsigned int,int,string,string);
	Corporativo(const Corporativo&);
	virtual string toString()const = 0;
    virtual string type()const=0;
	void agregarLinea();
	void crearLineas();
	void verLineas();
    virtual string code()=0;
};
#endif
