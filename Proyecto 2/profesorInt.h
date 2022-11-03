#pragma once
#include "profesor.h"
class profesorInt : public profesor
{
private:
	double calificacion;
public:
	profesorInt(string, string, string, string, string, int, double);
	~profesorInt();
	double getCalificacion();
	string toString();
};

