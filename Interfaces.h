#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"

#include <stdexcept>

using namespace std;

class IADesenvolvedor {
public:
    bool cadastrar();
    virtual bool executar(Matricula) = 0;
}
#endif // INTERFACES_H_INCLUDED
