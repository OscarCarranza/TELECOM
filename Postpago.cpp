#include "Postpago.h"
#include "Particulares.h"
#include "Cliente.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

	Postpago::Postpago(string name,string adress,string email,unsigned int num_fijo,unsigned int id,double fac_consumo,
	string ultimo_pago,string fecha_corte): Particulares(name,adress,email,num_fijo,id), ultimo_pago(ultimo_pago),
	fecha_corte(fecha_corte),fac_consumo(fac_consumo){

	}

	Postpago::Postpago(const Postpago& cliente):Particulares(cliente),ultimo_pago(cliente.ultimo_pago),
	fecha_corte(cliente.fecha_corte),fac_consumo(cliente.fac_consumo){

	}

	string Postpago::toString()const{
		stringstream ss;
		ss << "Particular Postpago: [";
		ss << Particulares::toString() << " ,Consumo total: $ " << fac_consumo << ", Último pago realizado: " 
		<< ultimo_pago << ", Fecha de Corte: " << fecha_corte << "]";
		return ss.str();
	}

	string Postpago::getUltimoPago()const{
		return ultimo_pago;
	}

	string Postpago::getFechaCorte()const{
		return fecha_corte;
	}

	void Postpago::hacerPago(double consumo){
		fac_consumo -= consumo;
	}

	double Postpago::getFacturaConsumo()const{
		return fac_consumo;
	}

	void Postpago::setFacturaConsumo(double fac_consumo){
		this->fac_consumo += fac_consumo;
	}