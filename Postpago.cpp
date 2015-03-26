#include "Postpago.h"
#include "Particulares.h"
#include "Cliente.h"
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>

using std::string;
using std::stringstream;

	Postpago::Postpago(string name,string adress,string email,unsigned int num_fijo,unsigned int id,double fac_consumo,
	string ultimo_pago,string fecha_corte): Particulares(name,adress,email,num_fijo,id), ultimo_pago(ultimo_pago),
	fecha_corte(fecha_corte),fac_consumo(fac_consumo){
        this->cod = this->code();
	}

	Postpago::Postpago(const Postpago& cliente):Particulares(cliente),ultimo_pago(cliente.ultimo_pago),
	fecha_corte(cliente.fecha_corte),fac_consumo(cliente.fac_consumo){

	}

	string Postpago::toString()const{
		stringstream ss;
        ss <<  cod << " Particular Postpago:";
        ss << Particulares::toString() << "     Consumo total: $ " << fac_consumo << "\n     Último pago realizado: "
        << ultimo_pago << "\n     Fecha de Corte: " << fecha_corte ;
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

    string Postpago::type()const{
        stringstream ss;
        ss << "Postpago " << Particulares::type();
        return ss.str();
    }

    string Postpago::code(){
        srand(time(0));
        int cod = rand()% 1000 + 3000;
        stringstream ss;
        ss << "POS" << cod;
        return ss.str();
    }


