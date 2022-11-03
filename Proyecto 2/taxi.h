#include "transporte.h"

class taxi : public transporte {
private:
    double costoViaje;
    int numPacientes;
public:
    taxi(string, string, float, string, double, int);
    ~taxi();
    void setCostoViaje(double);
    void setNumPacientes(int);
    double getCostoViaje();
    int getNumPacientes();
    string toString();
};