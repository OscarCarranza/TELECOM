#include "venta.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Venta::Venta(string celular,string precio, string total,int codigo):celular(celular),precio(precio),total(total),codigo(codigo)
{

}

Venta::~Venta()
{

}

string Venta::toString()const{
    stringstream ss;
    ss << "Código #" << codigo << "\n     Celular: " << celular << "\n     Precio: " << precio << "\n     Total: " << total;
    return ss.str();
}
