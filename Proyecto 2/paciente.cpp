#include "paciente.h"

Paciente::Paciente(string _nombre, string _apellido, string _nombrUni) {
	nombre = _nombre;
	apellido = _apellido;
	nombrUni = _nombrUni;
}
Paciente::~Paciente() {

}
string Paciente::getNombrUni() {
	return nombrUni;
}
string Paciente::getNombre() {
	stringstream t;
	t << nombre << " " << apellido << endl;
	return t.str();
}
string Paciente::toString() {
	stringstream s;
	s << getNombre();
	s << "Nombre de la universidad del estudiante: " << nombrUni << endl;
	return s.str();
}