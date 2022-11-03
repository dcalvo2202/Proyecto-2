#pragma once
#include "paciente.h"

class estudiante : public Paciente
{
protected:
	string codCarrera;
	int ultNivelCurs;
	int numTelefono;
public:
	estudiante(string, string, string, string, int, int);
	~estudiante();
	string getCedula();
	string getNumPas();
	string getCodCarrera();
	int getUltNivelCurs();
	int getNumTel();
	string toString();
};

