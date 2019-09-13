#include "../../headers/pecas/Arqueiro.h"

//Construtores 
Arqueiro::Arqueiro(pair<int,int> tamanho, Times_Jogo time):Peca(tamanho,time){
    Atributos* atb = this->getAtributos();
    atb->setHP(2);
    atb->setDano(2);
    atb->setIniciativa(0);
    atb->setAlcance(2);
    atb->setTempoRecarga(0);
    
    this->setMark("A");
    this->especializacao = Tipo_Componentes::comp_peca;
}
Arqueiro::~Arqueiro(){}

//Funções
string Arqueiro::toString(){
    return this->getMark();
}