#include "objeto.h"
#include "nodo.h"

class listaBase {
protected:
    nodo * primero;
    nodo * actual;
public:
    listaBase();
    virtual void insertarFinal(objeto *);
	virtual bool eliminaFinal();
	virtual bool listaVacia();
	virtual ~listaBase();
    virtual string toString();
};