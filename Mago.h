#ifndef MAGO_H
#define MAGO_H

#include "Default.h"
#include "Peca.h"

class Mago : public Peca
{
private:
    /* data */
public:
    Mago();
    ~Mago();
    Mago(pair<int,int> tamanho,Times_Jogo time);
    string toString();
};

#endif