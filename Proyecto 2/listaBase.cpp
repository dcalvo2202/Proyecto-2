#include "listaBase.h"

listaBase::listaBase() {
    primero = NULL;
    actual = NULL;
}
listaBase::~listaBase() {
    while (!listaVacia()) {
		eliminaFinal();
	}
}
void listaBase::insertarFinal(objeto* objeto) {
	actual = primero;
	if (primero == NULL) {
		primero = new nodo(objeto, NULL);
	}
	else {
		while (actual->getSig() != NULL) {                                
			actual = actual->getSig();
		}
		actual->setSig(new nodo(objeto, NULL));
	}
}
bool listaBase::listaVacia() {
	if (primero == NULL) return true;
	else return false;
}
bool listaBase::eliminaFinal() {
	actual = primero;	
	if (primero == NULL) {
		return false;
	}
	else {
		if (primero->getSig() == NULL) {
			delete primero;
			primero = NULL;
		}
		else {

			while (actual->getSig()->getSig() != NULL) {
				actual = actual->getSig();
			}
			delete  actual->getSig();
			actual->setSig(NULL);
		}
		return true;
	}
}
string listaBase::toString() {
	stringstream s;
	actual = primero;
	while (actual != NULL) {
		s << actual->toStringNodo();
		actual = actual->getSig();
	}
	return s.str();
}