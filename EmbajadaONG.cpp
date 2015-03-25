#include "EmbajadaONG.h"
#include "Corporativo.h"
#include "Cliente.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

EmbajadaONG::EmbajadaONG(string name,string adress,string email,unsigned int num_fijo,int num_lineas,string contact,string contact_job,
int tipo,string caracteristica,int descuento):Corporativo(name,adress,email,num_fijo,num_lineas,contact,contact_job),
tipo(tipo),descuento(descuento),caracteristica(caracteristica){

}

EmbajadaONG::EmbajadaONG(const EmbajadaONG& embong):Corporativo(embong),tipo(embong.tipo),caracteristica(embong.caracteristica),
descuento(embong.descuento){

}

string EmbajadaONG::toString()const{
	stringstream ss;
	ss << ((tipo==1)?"Embajada":"ONG") << " [ " << Corporativo::toString() << ((tipo==1)?"Tipo":"Beneficiarios") << ": " << caracteristica
	<< ", Descuento: " << descuento << "]";
	return ss.str();
}