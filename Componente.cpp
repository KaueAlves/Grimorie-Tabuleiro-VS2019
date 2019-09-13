#include "Componente.h"

Componente::Componente(int id,string nome, string tipo, pair<int,int> tamanho){
    this->id = id;
    this->nome = nome;
    this->tipo = tipo;
    this->tamanho = tamanho;
    this->especializacao = Tipo_Componentes::comp_componente;
}

Componente::~Componente(){};

int Componente::getID(){
    return this->id;
}

string Componente::getNome(){
    return this->nome;
}

string Componente::getTipo(){
    return this->tipo;
}

Posicao Componente::getPosicao(){
    return this->pos;
}

pair<int,int> Componente::getTamanho(){
    return this->tamanho;
}

string Componente::getMark(){
    return this->mark;
}

void Componente::setID(int id){
    this->id = id;
}

void Componente::setNome(string nome){
    this->nome = nome;
}

void Componente::setTipo(string tipo){
    this->tipo = tipo;
}

void Componente::setTipos(Tipo_Componentes tipo){
    this->especializacao = tipo;
}

void Componente::setPosicao(Posicao pos){
    this->pos = pos;
}

void Componente::setTamanho(pair<int,int> tamanho){
    this->tamanho = tamanho;
}

void Componente::setMark(string mark){
    this->mark = mark;
}

string Componente::toString(){
    string output = "Componente: ";
    output += to_string(id);
    output += "- " + this->nome;
    output += "- " + this->tipo;
    return output;
}
