#pragma once
#include "estudiante.h"

class estudianteInt : public estudiante
{
private:
	string numPasaporte;
	string nacionalidad;
	string condicionPais;
public:
	estudianteInt(string, string, string, string, int, int, string, string, string);
	~estudianteInt();
	string getNacionalidad();
	string getNumPasaporte();
	string getCondicionPais();
	string toString();
};

