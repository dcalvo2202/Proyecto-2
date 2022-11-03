#include "taxi.h"

taxi::taxi(string _placa, string _marca, float _km, string _tipoViaje, double _costoViaje, int _numPacientes) : transporte(_placa, _marca, _km, _tipoViaje) {
    costoViaje = _costoViaje;
    numPacientes = _numPacientes;
}
taxi::~taxi() {
}
void taxi::setCostoViaje(double _costoViaje) {
    costoViaje = _costoViaje;
}
void taxi::setNumPacientes(int _numPacientes) {
    numPacientes = _numPacientes;
}
double taxi::getCostoViaje() {
    return costoViaje;
}
int taxi::getNumPacientes() {
    return numPacientes;
}
string taxi::toString() {
    stringstream s;
    s << "-----Informacion del taxi-----" << endl;
    s << transporte::toString();
    s << "Costo del viaje: " << costoViaje << endl;
    s << "Numero de pacientes en el viaje: " << numPacientes << endl << endl;
    return s.str();
}