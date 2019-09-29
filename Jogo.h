#if !defined(JOGO_H)
#define JOGO_H

#include "default.h"
#include "GrimorieCore.h"

class Jogo
{
private:
	int placarAzul, placarVermelho;
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
	bool realizarAtaques(shared_ptr<Peca> pecaAtacante, shared_ptr<Tabuleiro> tab);
	void atacarPeca(shared_ptr<Peca> pecaAtacante, shared_ptr<Peca> PecaDefensora);
	bool verificarTime(shared_ptr<Peca> peca1, shared_ptr<Peca> peca2);
	void contabilizarPontos(shared_ptr<Peca> pecaAtacante, shared_ptr<Tabuleiro> tab);
	void contabilizarMortos(shared_ptr<Tabuleiro> tab);
	void iniciarJogo();
    
};

#endif // JOGO_H
