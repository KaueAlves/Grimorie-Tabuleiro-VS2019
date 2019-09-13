#include "Jogo.h"

Jogo::Jogo(shared_ptr<Tabuleiro>& tab)
{
    this->tab = tab;
}

Jogo::~Jogo()
{
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
}

void Jogo::colocarTime2(){
    shared_ptr<Guerreiro> guer2(new Guerreiro(make_pair(1,1),Times_Jogo::time_vermelho));
    shared_ptr<Mago> mago2(new Mago(make_pair(1,1),Times_Jogo::time_vermelho));
    shared_ptr<Arqueiro> arqu2(new Arqueiro(make_pair(1,1),Times_Jogo::time_vermelho));
    shared_ptr<Mago> mago22(new Mago(make_pair(1,1),Times_Jogo::time_vermelho));
    shared_ptr<Arqueiro> arqu22(new Arqueiro(make_pair(1,1),Times_Jogo::time_vermelho));

    this->getTabuleiro()->adicionarPeca( Posicao(10,0,0), guer2 );
    this->getTabuleiro()->adicionarPeca( Posicao(10,1,0), mago2 );
    this->getTabuleiro()->adicionarPeca( Posicao(11,0,0), arqu2 );
    this->getTabuleiro()->adicionarPeca( Posicao(11,1,0), mago2 );
    this->getTabuleiro()->adicionarPeca( Posicao(11,2,0), arqu2 );
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

void Jogo::movimentarPeca(){
    this->tab->getTabComp();
}