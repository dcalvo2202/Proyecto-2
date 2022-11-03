#include "estudianteInt.h"
estudianteInt::estudianteInt(string _nombre, string _apellido, string _nombrUni, string _codCarrera, int _ultNivelCurs, int _numTelefono, string _nacionalidad, string _condicionPais, string _numPasaporte) : estudiante(_nombre, _apellido, _nombrUni, _codCarrera, _numPasaporte, _ultNivelCurs, _numTelefono) {
	numPasaporte = _numPasaporte;
	nacionalidad = _nacionalidad;,
	condicionPais = _condicionPais;
}
estudianteInt::~estudianteInt() {
}
string estudianteInt::getNacionalidad() {
	return nacionalidad;
}
string estudianteInt::getNumPasaporte() {
	return numPasaporte;
}
string estudianteInt::getCondicionPais() {
	return condicionPais;
}
string estudianteInt::toString() {
	stringstream t;
	t << "-----Estudiante Internacional-----" << endl;
	t << estudiante::toString();
	t << "- Nacionalidad: " << nacionalidad << endl;
	t << "- Numero de pasaporte: " << numPasaporte << endl;
	t << "- Condicion en el pais: " << condicionPais << endl;
	return t.str();
}