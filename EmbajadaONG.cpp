#include "EmbajadaONG.h"
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

EmbajadaONG::EmbajadaONG(string name,string adress,string email,unsigned int num_fijo,int num_lineas,string contact,string contact_job,
int tipo,string caracteristica,int descuento):Corporativo(name,adress,email,num_fijo,num_lineas,contact,contact_job),
tipo(tipo),descuento(descuento),caracteristica(caracteristica){
    this->cod = this->code();
}

EmbajadaONG::EmbajadaONG(const EmbajadaONG& embong):Corporativo(embong),tipo(embong.tipo),caracteristica(embong.caracteristica),
descuento(embong.descuento){

}

string EmbajadaONG::toString()const{
	stringstream ss;
    ss << cod << " Embajada/ONG: " << Corporativo::toString() << "     Beneficiarios/Tipo: " << caracteristica
    << "\n     Descuento: " << descuento ;
	return ss.str();
}

string EmbajadaONG::type()const{
    stringstream ss;
    ss << "Embajada/ONG "<< Corporativo::type();
    return ss.str();
}

string EmbajadaONG::code(){
    srand(time(0));
    int cod = rand()% 1000 + 1000;
    stringstream ss;
    ss << "EO" << cod;
    return ss.str();
}
