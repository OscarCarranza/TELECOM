#include "Prepago.h"
#include "Particulares.h"
#include "Cliente.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using std::string;
using std::stringstream;
using std::setprecision;

	Prepago::Prepago(string name,string adress,string email,unsigned int num_fijo,unsigned int id,
	bool paquete_internet,double saldo_disponible): Particulares(name,adress,email,num_fijo,id), 
	saldo_disponible(saldo_disponible),paquete_internet(paquete_internet){
        this->cod = this->code();
	}

	Prepago::Prepago(const Prepago& cliente):Particulares(cliente),saldo_disponible(cliente.saldo_disponible),
	paquete_internet(cliente.paquete_internet){

	}

	string Prepago::toString()const{
		stringstream ss;
        ss <<  cod << " Particular Prepago:";
        ss << Particulares::toString() << "     Paquetes de Internet: " << ((paquete_internet)?"SI":"NO") << "\n     Saldo disponible: "
        << setprecision(5) <<  saldo_disponible ;
		return ss.str();
	}

	double Prepago::getSaldoDisponible()const{
		return saldo_disponible;
	}

	void Prepago::ingresarRecarga(double saldo){
		saldo_disponible += saldo;
	}

    string Prepago::type()const{
        stringstream ss;
        ss << "Prepago "<< Particulares::type() ;
        return ss.str();
    }

    string Prepago::code(){
        srand(time(0));
        int cod = rand()% 1000 + 4000;
        stringstream ss;
        ss << "PRE" << cod;
        return ss.str();
    }

