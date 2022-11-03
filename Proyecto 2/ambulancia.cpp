#include "ambulancia.h"

ambulancia::ambulancia(string _placa, string _marca, float _km, string _tipoViaje, bool _ocupada, string _codigo) : transporte(_placa, _marca, _km, _tipoViaje) {
    ocupada = _ocupada;
    codigo = _codigo;
}
ambulancia::~ambulancia() {
}
void ambulancia::setCodigo(string _codigo) {
    codigo = _codigo;
}
void ambulancia::setOcupada(bool _ocupada) {
    ocupada = _ocupada;
}
string ambulancia::getCodigo() {
    return codigo;
}
bool ambulancia::getOcupada() {
    if(ocupada == true) {
        return ocupada;
    } else {
        return false;
    }
}
string ambulancia::toString() {
    stringstream s;
    s << "-----Informacion de la ambulancia-----" << endl;
    s << transporte::toString();
    s << "Ocupacion(1: ocupada / 2: libre): " << ocupada << endl;
    s << "Codigo: " << codigo << endl << endl;
    return s.str();
}