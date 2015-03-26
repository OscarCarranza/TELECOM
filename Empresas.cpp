#include "Empresas.h"
#include "Corporativo.h"
#include "Cliente.h"
#include <string>
#include <sstream>
#include <iostream>
#include <ctime>
#include <cstdlib>

using std::string;
using std::stringstream;
using std::endl;

Empresas::Empresas(string name,string adress,string email,unsigned int num_fijo,int num_lineas,string contact,string contact_job,
	string tipo,double fac_mensual):Corporativo(name,adress,email,num_fijo,num_lineas,contact,contact_job),tipo(tipo),fac_mensual(fac_mensual){
    this->cod = this->code();
}

Empresas::Empresas(const Empresas& empresa):Corporativo(empresa),tipo(empresa.tipo),fac_mensual(empresa.fac_mensual){

}

string Empresas::toString()const{
	stringstream ss;
    ss << cod << " Empresa " << tipo <<  Corporativo::toString() << "     Facturación Mensual: $" << fac_mensual ;
	return ss.str();
}

string Empresas::type()const{
    stringstream ss;
    ss << "Empresa "<< tipo << " " << Corporativo::type() ;
    return ss.str();
}

string Empresas::code(){
    srand(time(0));
    int cod = rand()% 1000 + 2000;
    stringstream ss;
    ss << "EMP" << cod;
    return ss.str();
}

