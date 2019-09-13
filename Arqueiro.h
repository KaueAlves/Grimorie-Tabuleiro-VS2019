#ifndef ARQUEIRO_H
#define ARQUEIRO_H

#include "Default.h"
#include "Peca.h"

class Arqueiro : public Peca
{
private:
    /* data */
public:
    Arqueiro();
    ~Arqueiro();
    Arqueiro(pair<int,int> tamanho,Times_Jogo time);
    string toString();
};

#endif