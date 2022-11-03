#include "estudiante.h"
#include <sstream>
using namespace std;

estudiante::estudiante(string _nombre, string _apellido, string _nombrUni, string _codCarrera, int _ultNivelCurs, int _numTelefono) : Paciente(_nombre, _apellido, _nombrUni) {
	codCarrera = _codCarrera;
	ultNivelCurs = _ultNivelCurs;
	numTelefono = _numTelefono;
}
estudiante::~estudiante() {
}
string estudiante::getCodCarrera() {
	return codCarrera;
}
int estudiante::getUltNivelCurs() {
	return ultNivelCurs;
}
int estudiante::getNumTel() {
	return numTelefono;
}
string estudiante::getCedula() {
	return cedula;
}
string estudiante::getNumPas() {
	return numPasaporte;
}
string estudiante::toString() {
	stringstream t;
	t << Paciente::toString();
	t << "- Codigo de carrera a la que pertenece: " << codCarrera << endl;
	t << "- Ultimo nivel cursado: " << ultNivelCurs << endl;
	t << "- Numero de telefono registrado: " << numTelefono << endl;
	return t.str();
}