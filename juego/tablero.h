#ifndef TABLERO_H
#define TABLERO_H
#include "casilla.h"

class Tablero
{
    private:
        Casilla cas[100];
    public:
        Tablero();
        void imprimir();
};

#endif