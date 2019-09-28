#include "Default.h"
#include "Jogo.h"

int main() {

	// Tabuleiro

	shared_ptr<Tabuleiro> tab(new Tabuleiro(12, 3, 1));
	shared_ptr<Jogo>    jogo(new Jogo(tab));

	// Monta o Tabuleiro
	jogo->getTabuleiro()->montarMatrix();

	// Colocando times Base
	jogo->colocarTime1();
	jogo->colocarTime2();

	// Escolhendo times
	// jogo->escolherTime1();
	// jogo->escolherTime2();

	jogo->iniciarJogo();

	return 0;
}

