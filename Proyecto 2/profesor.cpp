#include "profesor.h"

profesor::profesor(string _nombre, string _apellido, string _nombrUni, string _cedula, int _anniosLab, string _titulo) : Paciente(_nombre, _apellido, _nombrUni) {
	cedula = _cedula;
	titulo = _titulo;
	anniosLab = _anniosLab;
}
profesor::~profesor() {

}
string profesor::getTitulo() {
	return titulo;
}
int profesor::getAnniosLab() {
	return anniosLab;
}
string profesor::getCedula() {
	return cedula;
}
string profesor::toString() {
	stringstream t;
	t << Paciente::toString();
	t << "- Titulos registrados: " << titulo << endl;
	t << "- Annios laborados: " << anniosLab << endl;
	return t.str();
}