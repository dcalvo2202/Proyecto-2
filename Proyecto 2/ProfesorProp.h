#pragma once
#include "profesor.h"
class profesorProp : public profesor
{
private:
	string codPlaza;
public:
	profesorProp(string, string, string, string, string, int, string);
	~profesorProp();
	string getCodPlaza();
	string toString();
};

