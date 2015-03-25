#include "Empresas.h"
#include "Corporativo.h"
#include "Cliente.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Empresas::Empresas(string name,string adress,string email,unsigned int num_fijo,int num_lineas,string contact,string contact_job,
	string tipo,double fac_mensual):Corporativo(name,adress,email,num_fijo,num_lineas,contact,contact_job),tipo(tipo),fac_mensual(fac_mensual){

}

Empresas::Empresas(const Empresas& empresa):Corporativo(empresa),tipo(empresa.tipo),fac_mensual(empresa.fac_mensual){

}

string Empresas::toString()const{
	stringstream ss;
	ss << "Empresa " << tipo << "[ " <<  Corporativo::toString() << ", Facturación Mensual: " << fac_mensual << "]";
	return ss.str();
}