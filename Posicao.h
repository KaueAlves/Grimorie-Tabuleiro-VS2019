#ifndef POSICAO_H
#define POSICAO_H

#include "Default.h"

class Posicao
{
private:
    int x,y,z;
public:
    // Construtores
    Posicao();
    Posicao(int x, int y, int z);
    ~Posicao();
    // Gets
    int getX();
    int getY();
    int getZ();
    void addPosicao(int x, int y, int z);
    string toString();
};

#endif