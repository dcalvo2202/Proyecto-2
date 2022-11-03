#include "transporte.h"

class ambulancia : public transporte {
private:
    bool ocupada;
    string codigo;
public:
    ambulancia(string, string, float, string, bool, string);
    ~ambulancia();
    void setOcupada(bool);
    void setCodigo(string);
    bool getOcupada();
    string getCodigo();
    string toString();
};