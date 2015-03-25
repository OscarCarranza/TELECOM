#ifndef POSTPAGO_H
#define POSTPAGO_H
#include <string>
#include "Cliente.h"
#include "Particulares.h"

class Postpago: public Particulares{
	string ultimo_pago, fecha_corte;
	double fac_consumo;
public:
	Postpago(string,string,string,unsigned int,unsigned int,double,string,string);
	Postpago(const Postpago&);
	virtual string toString()const;
	string getUltimoPago()const;
	string getFechaCorte()const;
	void hacerPago(double);
	double getFacturaConsumo()const;
	void setFacturaConsumo(double);
};
#endif