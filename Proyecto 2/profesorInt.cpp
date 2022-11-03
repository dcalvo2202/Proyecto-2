#include "profesorInt.h"

profesorInt::profesorInt(string _nombre, string _apellido, string _nombrUni, string _cedula, string _titulo, int _anniosLab, double _calificacion) : profesor(_nombre,
	_apellido, _nombrUni, _cedula, _anniosLab, _titulo) {
	calificacion = _calificacion;
}
profesorInt::~profesorInt() {

}
double profesorInt::getCalificacion() {
	return calificacion;
}
string profesorInt::toString() {
	stringstream t;
	t << "-----Profesor Interino-----" << endl;
	t << profesor::toString();
	t << "- Calificacion del profesor: " << calificacion << endl;
	return t.str();
}