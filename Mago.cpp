#include "Mago.h"

//Construtores 
Mago::Mago(pair<int,int> tamanho,Times_Jogo time):Peca(tamanho,time){
    Atributos* atb = this->getAtributos();
    atb->setHP(4);
    atb->setDano(6);
    atb->setIniciativa(0);
    atb->setAlcance(3);
    atb->setTempoRecarga(2);
    
    this->setMark("M");
    this->especializacao = Tipo_Componentes::comp_peca;
}
Mago::~Mago(){}

//Funções
string Mago::toString(){
    return this->getMark();
}