#include "Cliente.h"
#include "Particulares.h"
#include <string>
#include <sstream>
#include <iostream>;

using std::string;
using std::stringstream;
using std::endl;

	Particulares::Particulares(string name, string adress, string email, unsigned int num_fijo,unsigned int id)
	:Cliente(name,adress,email,num_fijo),id(id){

	}

	Particulares::Particulares(const Particulares& particular):Cliente(particular), id(particular.id){

	}

	string Particulares::toString()const{
		stringstream ss;
        ss << Cliente::toString()  << "     Número de Identidad: " << id << endl;
		return ss.str();
	}

	unsigned int Particulares::getID()const{
		return id;
	}

    string Particulares::type()const{
        stringstream ss;
        ss << Cliente::type();
        return ss.str();
    }

