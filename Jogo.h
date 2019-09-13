#if !defined(JOGO_H)
#define JOGO_H

#include "default.h"
#include "GrimorieCore.h"

class Jogo
{
private:
    shared_ptr<Tabuleiro> tab;
public:
    Jogo(shared_ptr<Tabuleiro>& tab);
    ~Jogo();

    shared_ptr<Tabuleiro> getTabuleiro();
    void colocarTime1();
    void colocarTime2();
    void escolherTime1();
    void escolherTime2();
    void movimentarPeca();
    
};

#endif // JOGO_H
