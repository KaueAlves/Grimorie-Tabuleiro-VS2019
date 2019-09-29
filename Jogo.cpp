#include "Jogo.h"

Jogo::Jogo(shared_ptr<Tabuleiro>& tab)
{
    this->tab = tab;
}

Jogo::~Jogo()
{
}

void Jogo::iniciarJogo() {
	auto tab = this->getTabuleiro();
	do
	{
		cout << tab->toString();
		// Loop padrão
		for (auto&& pecaSelecionada : tab->getTabPeca())
		{
			Posicao newPos = pecaSelecionada.second->getPosicao();
			(pecaSelecionada.second->getTime() == Times_Jogo::time_azul) ? newPos.addPosicao(1, 0, 0) : newPos.addPosicao(-1, 0, 0);

			if (!realizarAtaques(pecaSelecionada.second,tab)) {
				tab->moverPeca(pecaSelecionada.second->getPosicao(),newPos);
			}

			//Marcar Pontos
			contabilizarPontos(pecaSelecionada.second,tab);
		}
		// Contagem de mortos
		contabilizarMortos(tab);

		cout << "Placar do Time Azul: " << this->placarAzul << "|| Placar do Time Vermelho: " << this->placarVermelho << endl;
		cout << tab->toString();
		
	} while (tab->getTabPeca().size() > 0);
}

shared_ptr<Tabuleiro> Jogo::getTabuleiro(){
    return this->tab;
}

void Jogo::colocarTime1(){
    shared_ptr<Guerreiro> guer1(new Guerreiro(make_pair(1,1),Times_Jogo::time_azul));
    shared_ptr<Mago> mago1(new Mago(make_pair(1,1),Times_Jogo::time_azul));
    shared_ptr<Arqueiro> arqu1(new Arqueiro(make_pair(1,1),Times_Jogo::time_azul));
    shared_ptr<Guerreiro> guer11(new Guerreiro(make_pair(1,1),Times_Jogo::time_azul));
    shared_ptr<Mago> mago11(new Mago(make_pair(1,1),Times_Jogo::time_azul));

    this->getTabuleiro()->adicionarPeca( Posicao(0,0,0), guer1 );
    this->getTabuleiro()->adicionarPeca( Posicao(0,1,0), mago1 );
    this->getTabuleiro()->adicionarPeca( Posicao(0,2,0), arqu1 );
    this->getTabuleiro()->adicionarPeca( Posicao(1,1,0), guer11 );
    this->getTabuleiro()->adicionarPeca( Posicao(1,2,0), mago11 );

	guer1->setMark("G1");
	mago1->setMark("M1");
	arqu1->setMark("A1");
	guer11->setMark("M11");
	mago11->setMark("A11");
}

void Jogo::colocarTime2(){
    shared_ptr<Guerreiro> guer2(new Guerreiro(make_pair(1,1),Times_Jogo::time_vermelho));
    shared_ptr<Mago> mago2(new Mago(make_pair(1,1),Times_Jogo::time_vermelho));
    shared_ptr<Arqueiro> arqu2(new Arqueiro(make_pair(1,1),Times_Jogo::time_vermelho));
    shared_ptr<Mago> mago22(new Mago(make_pair(1,1),Times_Jogo::time_vermelho));
    shared_ptr<Arqueiro> arqu22(new Arqueiro(make_pair(1,1),Times_Jogo::time_vermelho));

	guer2->setMark("G2");
	mago2->setMark("M2");
	arqu2->setMark("A2");
	mago22->setMark("M22");
	arqu22->setMark("A22");

    this->getTabuleiro()->adicionarPeca( Posicao(10,0,0), guer2 );
    this->getTabuleiro()->adicionarPeca( Posicao(10,1,0), mago2 );
    this->getTabuleiro()->adicionarPeca( Posicao(11,0,0), arqu2 );
    this->getTabuleiro()->adicionarPeca( Posicao(11,1,0), mago22 );
    this->getTabuleiro()->adicionarPeca( Posicao(11,2,0), arqu22 );
}

void Jogo::escolherTime1(){
    int opt,opt2;
    vector<Posicao> pos_time_1{Posicao(0,0,0), Posicao(1,0,0),Posicao(0,1,0),Posicao(1,1,0),Posicao(0,2,0),Posicao(1,2,0)};
    shared_ptr<Guerreiro> guer;
    shared_ptr<Mago> mago;
    shared_ptr<Arqueiro> arqu;

    for (int i = 0; i < 5; i++)
    {
        // 3 1 3 2 3 3 1 4 2 6
        system("CLS");
        cout << endl << "Time 1" << endl;
        cout << "Escolha a classe:" << endl;
        cout << "1 - Arqueiro" << endl;
        cout << "2 - Mago" << endl;
        cout << "3 - Guerreiro" << endl;
        

        cout << endl << "Time 1" << endl;
        cout << "Escolha a posicao da peca :" << i << endl;
        cout << "1 - 7 (numpad)" << endl;
        cout << "2 - 4 (numpad)" << endl;
        cout << "3 - 1 (numpad)" << endl;
        cout << "4 - 8 (numpad)" << endl;
        cout << "5 - 5 (numpad)" << endl;
        cout << "6 - 2 (numpad)" << endl;
        cin >> opt;
        cin >> opt2;

        switch (opt)
        {   
        case 1:
            arqu = make_shared<Arqueiro>(make_pair(1,1),Times_Jogo::time_azul);
            tab->adicionarPeca(pos_time_1[opt2-1],arqu);
            break;
        case 2:
            mago = make_shared<Mago>(make_pair(1,1),Times_Jogo::time_azul);
            tab->adicionarPeca(pos_time_1[opt2-1],mago);
            break;
        case 3:
            guer = make_shared<Guerreiro>(make_pair(1,1),Times_Jogo::time_azul);
            tab->adicionarPeca(pos_time_1[opt2-1],guer);
            break;
        
        default:
            cout << "Não soube escolher, escolha denovo." << endl;
            i--;
            break;
        }
    }


    
}

void Jogo::escolherTime2(){
    int opt,opt2;
    vector<Posicao> pos_time_2{Posicao(10,0,0), Posicao(11,0,0),Posicao(11,1,0),Posicao(10,1,0),Posicao(11,2,0),Posicao(10,2,0)};
    shared_ptr<Guerreiro> guer;
    shared_ptr<Mago> mago;
    shared_ptr<Arqueiro> arqu;

    for (int i = 0; i < 5; i++)
    {
        system("CLS");
        cout << endl << "Time 2" << endl;
        cout << "Escolha a classe:" << endl;
        cout << "1 - Arqueiro" << endl;
        cout << "2 - Mago" << endl;
        cout << "3 - Guerreiro" << endl;
        

        cout << endl << "Time 2" << endl;
        cout << "Escolha a posicao da peca :" << i << endl;
        cout << "1 - 8 (numpad)" << endl;
        cout << "2 - 5 (numpad)" << endl;
        cout << "3 - 2 (numpad)" << endl;
        cout << "4 - 9 (numpad)" << endl;
        cout << "5 - 6 (numpad)" << endl;
        cout << "6 - 3 (numpad)" << endl;
        cin >> opt;
        cin >> opt2;
        
         switch (opt)
        {   
        case 1:
            arqu = make_shared<Arqueiro>(make_pair(1,1),Times_Jogo::time_azul);
            tab->adicionarPeca(pos_time_2[opt2-1],arqu);
            break;
        case 2:
            mago = make_shared<Mago>(make_pair(1,1),Times_Jogo::time_azul);
            tab->adicionarPeca(pos_time_2[opt2-1],mago);
            break;
        case 3:
            guer = make_shared<Guerreiro>(make_pair(1,1),Times_Jogo::time_azul);
            tab->adicionarPeca(pos_time_2[opt2-1],guer);
            break;
        
        default:
            cout << "Não soube escolher, escolha denovo." << endl;
            i--;
            break;
        }
    }

}

bool Jogo::realizarAtaques(shared_ptr<Peca> pecaAtacante, shared_ptr<Tabuleiro> tab) {

	switch (pecaAtacante->getTime())
	{
	case Times_Jogo::time_azul:
		for (int i = 0; i < pecaAtacante->getAtributos()->getAlcance(); i++)
		{
			auto posVerificada = pecaAtacante->getPosicao();
			posVerificada.addPosicao(i,0,0);
			auto pecaVerificada = tab->verificarPeca(posVerificada);
			if (pecaVerificada != NULL) {
				if (pecaVerificada->getTime() != pecaAtacante->getTime()) {
					this->atacarPeca(pecaAtacante, pecaVerificada);
					return true;
				}
			}
		}
		return false;
		break;
	case Times_Jogo::time_vermelho:
		for (int i = 0; i < pecaAtacante->getAtributos()->getAlcance(); i++)
		{
			auto posVerificada = pecaAtacante->getPosicao();
			posVerificada.addPosicao(-i, 0, 0);
			auto pecaVerificada = tab->verificarPeca(posVerificada);
			if (pecaVerificada != NULL) {
				if (pecaVerificada->getTime() != pecaAtacante->getTime()) {
					this->atacarPeca(pecaAtacante, pecaVerificada);
					return true;
				}
			}
		}
		return false;
		break;
	}
}

void Jogo::atacarPeca(shared_ptr<Peca> pecaAtacante, shared_ptr<Peca> pecaDefensora) {
	cout << pecaAtacante->getMark() << " - Atacou a Peca: " << pecaDefensora->getMark() << endl;
	cout << pecaDefensora->getAtributos()->getHP() << endl;
	pecaDefensora->receberDano(pecaAtacante->getAtributos()->getDano());
	cout << pecaDefensora->getAtributos()->getHP() << endl;
}

bool Jogo::verificarTime(shared_ptr<Peca> peca1, shared_ptr<Peca> peca2) {
	if (peca1->getTime() == peca2->getTime()) {
		return false;
	}else{
		return true;
	}
}

void Jogo::contabilizarPontos(shared_ptr<Peca> pecaSelecionada, shared_ptr<Tabuleiro> tab) {

	if (pecaSelecionada->getTime() == Times_Jogo::time_azul) {
		if (pecaSelecionada->getPosicao().getX() == tab->getX() - 1) {
			tab->removerPeca(pecaSelecionada->getPosicao());
			this->placarAzul++;
		}
	}
	else {
		if (pecaSelecionada->getPosicao().getX() == 0) {
			tab->removerPeca(pecaSelecionada->getPosicao());
			this->placarVermelho++;
		}
	}
}

void Jogo::contabilizarMortos(shared_ptr<Tabuleiro> tab) {
	for (auto&& pecaSelecionada : tab->getTabPeca())
	{
		if (pecaSelecionada.second->getAtributos()->getHP() <= 0) {
			auto peca = tab->removerPeca(pecaSelecionada.second->getPosicao());
		}
	}
}