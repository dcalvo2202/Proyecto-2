#include "ProfesorProp.h"

profesorProp::profesorProp(string _nombre, string _apellido, string _nombrUni, string _cedula, string _titulo, int _anniosLab, string _codPlaza) : profesor(_nombre,
	_apellido, _nombrUni, _cedula,  _anniosLab, _titulo) {
	codPlaza = _codPlaza;
}
profesorProp::~profesorProp() {

}
string profesorProp::getCodPlaza() {
	return codPlaza;
}
string profesorProp::toString() {
	stringstream t;
	t << "-----Profesor en Propiedad-----" << endl;
	t << profesor::toString();
	t << "- Codigo de plaza: " << codPlaza << endl;
	return t.str();
}