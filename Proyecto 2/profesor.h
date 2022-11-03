#pragma once
#include "paciente.h"
class profesor : public Paciente
{
protected:
	string cedula;
	string titulo;
	int anniosLab;
public:
	profesor(string, string, string, string, int, string);
	~profesor();
	string getCedula();
	string getTitulo();
	int getAnniosLab();
	string toString();
};

