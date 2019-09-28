#include "Info.h"

Info::Info(){};
Info::~Info(){};

string Info::getNome(){
    return this->nome;
}

int Info::getIdade(){
    return this->idade;
}

string Info::getClasse(){
    return this->classe;
}

string Info::getLore(){
    return this->lore;
}

char Info::getSexo(){
    return this->sexo;
}

void Info::setNome( string nome ){
    this->nome = nome;
}

void Info::setIdade( int idade ){
    this->idade = idade;
}

void Info::setClasse( string classe ){
    this->classe = classe;
}

void Info::setLore( string lore ){
    this->lore = lore;
}

void Info::setSexo( char sexo ){
    this->sexo = sexo; 
}