#include "objeto.h"

class nodo {
private:
    objeto * info;
    nodo * sig;
public:
    nodo(objeto *, nodo *);
    ~nodo();
    void setInfo(objeto *);
    void setSig(nodo *);
    objeto * getInfo();
    nodo * getSig();
    string toStringNodo();
};