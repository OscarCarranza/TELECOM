#include "Corporativo.h"
#include "Cliente.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

	Corporativo::Corporativo(string name,string adress,string email,unsigned int num_fijo,int num_lineas,string contact,string contact_job):
	Cliente(name,adress,email,num_fijo),num_lineas(num_lineas),contact(contact),contact_job(contact_job){
		crearLineas();
	}

	Corporativo::Corporativo(const Corporativo& corporativo):Cliente(corporativo),num_lineas(corporativo.num_lineas),contact(corporativo.contact)
	,contact_job(corporativo.contact_job){

	}

	string Corporativo::toString()const{
		stringstream ss;
        ss << Cliente::toString()  << "     Número de Lineas: " << num_lineas << "\n     Nombre del Contacto: " << contact <<
        "\n     Puesto del Contacto: " << contact_job << endl;
		return ss.str();
	}

	void Corporativo::agregarLinea(){
		num_lineas++;
		string linea;
		cout << "Número de nueva linea: ";
		cin >> linea;
	}

	void Corporativo::crearLineas(){
		for(int i = 0; i < num_lineas; i++){
			srand(time(0));
			long int line = 99000000 + (rand()%100000);
			lineas.push_back(line);
		}
	}

    string Corporativo::type()const{
        stringstream ss;
        ss << Cliente::type();
        return ss.str();
    }
