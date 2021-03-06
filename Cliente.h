#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

using std::string;

class Cliente{
	string name; //dueño de la linea
	string adress;
	string email;
    unsigned int num_fijo;
public:
	Cliente(string,string,string,unsigned int);
	Cliente(const Cliente&);
	virtual string toString()const;
    virtual string type()const;
    virtual string code()=0;
};

#endif
