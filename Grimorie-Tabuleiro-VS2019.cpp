#include "Default.h"
#include "Jogo.h"

int main() {

	// Tabuleiro

	shared_ptr<Tabuleiro> tab(new Tabuleiro(12, 3, 1));
	shared_ptr<Jogo>    jogo(new Jogo(tab));

	// Monta o Tabuleiro
	jogo->getTabuleiro()->montarMatrix();

	// Colocando times Base
	// jogo->colocarTime1();
	jogo->colocarTime2();

	// Escolhendo times
	// jogo->escolherTime1();
	// jogo->escolherTime2();
	for (int i = 0; i < 12; i++)
	{
		for (auto&& i : jogo->getTabuleiro()->getTabPeca())
		{
			cout << jogo->getTabuleiro()->toString();
			auto x = i.second->getMark();
			auto time = i.second->getTime();
			if (time == Times_Jogo::time_azul) {
				Posicao newPos = i.second->getPosicao();
				newPos.addPosicao(1, 0, 0);
				jogo->getTabuleiro()->moverPeca(i.second->getPosicao(), newPos);
			}
			else {
				Posicao newPos = i.second->getPosicao();
				newPos.addPosicao(-1, 0, 0);
				jogo->getTabuleiro()->moverPeca(i.second->getPosicao(), newPos);
			}
			cout << jogo->getTabuleiro()->toString();
		}
	}



	return 0;
}

