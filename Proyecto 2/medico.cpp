#include "medico.h"

medico::medico(string _nombre, string _apellido, string _cedula, int _numTelefono, string _especialidad) {
	nombre = _nombre;
	apellido = _apellido;
	cedula = _cedula;
	numTelefono = _numTelefono;
	especialidad = _especialidad;
}
medico::~medico() {

}
string medico::getCedula() {
	return cedula;
}
string medico::getEspecialidad() {
	return especialidad;
}
string medico::toString() {
	stringstream t;
	t << "- Nombre del medico: " << nombre << " " << apellido << endl;
	t << "- Cedula: " << cedula << endl;
	t << "- Numero de telefono: " << numTelefono << endl;
	t << "- Especialidad medica: " << especialidad << endl << endl;
	return t.str();
}