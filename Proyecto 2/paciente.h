#pragma once
#include "objeto.h"

class Paciente : public objeto
{
protected:
	string nombrUni;
	string nombre;
	string apellido;
public:
	Paciente(string, string, string);
	~Paciente();
	string getNombrUni();
	string getNombre();
	string toString();
};

