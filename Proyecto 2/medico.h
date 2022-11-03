#pragma once
#include "objeto.h"

class medico : public objeto
{
private:
	string cedula;
	string nombre;
	string apellido;
	int numTelefono;
	string especialidad;
public:
	medico(string, string, string, int, string);
	~medico();
	string getCedula();
	string getEspecialidad();
	string toString();
};

