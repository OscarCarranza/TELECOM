#include "Cliente.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

	Cliente::Cliente(string name,string adress,string email,unsigned int num_fijo):name(name),
	adress(adress),num_fijo(num_fijo),email(email){

	}

	Cliente::Cliente(const Cliente& cliente):name(cliente.name), adress(cliente.adress), email(cliente.email), num_fijo(cliente.num_fijo){

	}

	string Cliente::toString()const{
		stringstream ss;
		ss << "Nombre: " << name << ", Dirección: " << adress << ", Correo Electrónico: " << email << ", Teléfono fijo: " << num_fijo;
		return ss.str();
	}

