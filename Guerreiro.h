#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "Default.h"
#include "Peca.h"

class Guerreiro : public Peca
{
private:
    /* data */
public:
    Guerreiro();
    ~Guerreiro();
    Guerreiro(pair<int,int> tamanho,Times_Jogo time);
    string toString();
};

#endif