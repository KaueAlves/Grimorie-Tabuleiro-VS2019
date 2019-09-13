#include "../../headers/pecas/Guerreiro.h"

//Construtores 
Guerreiro::Guerreiro(pair<int,int> tamanho,Times_Jogo time):Peca(tamanho,time){
    Atributos* atb = this->getAtributos();
    atb->setHP(6);
    atb->setDano(4);
    atb->setIniciativa(0);
    atb->setAlcance(0);
    atb->setTempoRecarga(0);
    
    this->setMark("G");
    this->especializacao = Tipo_Componentes::comp_peca;
}
Guerreiro::~Guerreiro(){}

//Funções
string Guerreiro::toString(){
    return this->getMark();
}