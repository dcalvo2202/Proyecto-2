#include <iostream>
#include "listaMedicos.h"
#include "listaPacientes.h"
#include "ProfesorProp.h"
#include "estudianteNac.h"

using namespace std;

int main() {
	medico* elMed1 = new medico("1-4815-1526", "Raul", "Arias Brenes", 84156231, "Doctor General");
	medico* elMed3 = new medico("1-4815-1526", "Pedro", "Arias Brenes", 84156231, "Doctor General");
	medico* elMed2 = new medico("1-4815-1526", "Maria", "Arias Brenes", 84156231, "Doctor General");
	medico* elMed4 = new medico("1-4815-1526", "Daniel", "Arias Brenes", 84156231, "Doctor General");
	profesorProp* elpr1 = new profesorProp("Karla", "Arguedas Solano", "UCR", "1-4815-2305", "Ense�anza de la matematica", 10, "PLS-784");
	estudianteNac* est1 = new estudianteNac("Mathias", "Arguedas Solano", "UCR", "EIF4156", 5, 481524150, "10-1512-0215", 1);
	listaPacientes* lalistaPas = new listaPacientes();
	listaMedicos* lalista = new listaMedicos();
	lalistaPas->insertarPaciente(elpr1);
	lalistaPas->insertarPaciente(est1);
	lalista->insertarMedico(elMed1);
	lalista->insertarMedico(elMed2);
	lalista->insertarMedico(elMed3);
	lalista->insertarMedico(elMed4);
	cout << lalista->toStringListaMedicos();
	cout << endl << endl << lalistaPas->toStringListaPacientes();
	return 0;
}