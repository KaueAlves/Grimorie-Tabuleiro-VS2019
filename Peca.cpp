#include "Peca.h"

Peca::Peca(pair<int,int> tamanho, Times_Jogo time):Componente(1,"Peca","Peca",make_pair(1,1)){
    this->mark = "P";
    this->tamanho = tamanho;
    this->especializacao = Tipo_Componentes::comp_peca;
    this->time = time;
};
Peca::~Peca(){}

//Gets

int Peca::getQntMaxMovimetnos(){
    return this->qntMaxMovimentos;
}

int Peca::getQntMovimentos(){
    return this->qntMovimentos;
}

Info Peca::getInfo(){
    return this->info;
}

Atributos* Peca::getAtributos(){
    return &this->atributos;
}

Times_Jogo Peca::getTime(){
    return this->time;
}

//Sets

void Peca::setQntMaxMovimentos(int qntMaxMovimentos){
    this->qntMaxMovimentos = qntMaxMovimentos;
}
void Peca::setQntMovimentos(int qntMovimentos){
    this->qntMovimentos = qntMovimentos;
}

void Peca::setAtributos(Atributos atb){
    this->atributos = atb;
}

//Funções 

bool Peca::movimentosPossiveis(Posicao pos){
    return false;
}

void Peca::receberDano(int num) {
	this->atributos.setHP(this->atributos.getHP() - num);
}

string Peca::toString(){
    return this->mark;
}
