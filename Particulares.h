#ifndef PARTICULARES_H
#define PARTICULARES_H
#include <string>
#include "Cliente.h"

class Particulares:public Cliente{
	unsigned int id;
public: 
	Particulares(string,string,string,unsigned int,unsigned int);
	Particulares(const Particulares&);
	virtual string toString()const = 0;
	unsigned int getID()const;
};
#endif