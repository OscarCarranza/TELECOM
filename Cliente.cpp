#include "Cliente.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;
using std::endl;

	Cliente::Cliente(string name,string adress,string email,unsigned int num_fijo):name(name),
	adress(adress),num_fijo(num_fijo),email(email){

	}

	Cliente::Cliente(const Cliente& cliente):name(cliente.name), adress(cliente.adress), email(cliente.email), num_fijo(cliente.num_fijo){

	}

	string Cliente::toString()const{
		stringstream ss;
        ss << "\n     Nombre: " << name << "\n     Dirección: " << adress << "\n     Correo Electrónico: " << email << "\n     Teléfono fijo: " << num_fijo << endl;
		return ss.str();
	}

    string Cliente::type()const{
        return name;
    }

