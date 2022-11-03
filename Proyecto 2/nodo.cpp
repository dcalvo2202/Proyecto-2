#include "nodo.h"

nodo::nodo(objeto * _info, nodo * _sig) {
    info = _info;
    sig = _sig;
}
nodo::~nodo() {
}
void nodo::setInfo(objeto * _info) {
    info = _info;
}
void nodo::setSig(nodo * _sig) {
    sig = _sig;
}
objeto * nodo::getInfo() {
    return info;
}
nodo * nodo::getSig() {
    return sig;
}
string nodo::toStringNodo() {
    return info->toString();
}
