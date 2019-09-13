#include "Atributos.h"

Atributos::Atributos(){
    this->hp = 100;
    this->iniciativa = 50;
    this->dano = 5;
    this->tempoRecarga = 5;
    this->alcance = 5;
}

Atributos::Atributos(vector<int> atributos_valores){
    this->hp = atributos_valores[0];
    this->iniciativa = atributos_valores[1];
    this->dano = atributos_valores[2];
    this->tempoRecarga = atributos_valores[3];
    this->alcance = atributos_valores[4];
}

Atributos::~Atributos(){}

// Gets
int Atributos::getHP(){
    return this->hp;
}
int Atributos::getIniciativa(){
    return this->iniciativa;
}
int Atributos::getDano(){
    return this->dano;
}
int Atributos::getTempoRecarga(){
    return this->tempoRecarga;
}
int Atributos::getAlcance(){
    return this->alcance;
}

// Sets
void Atributos::setHP( int hp){
    this->hp = hp;
}
void Atributos::setIniciativa(int iniciativa){
    this->iniciativa = iniciativa;
}
void Atributos::setDano(int dano){
    this->dano = dano;
}
void Atributos::setTempoRecarga(int tempoRecarga){
    this->hp = tempoRecarga;
}
void Atributos::setAlcance(int alcance){
    this->alcance = alcance;
}