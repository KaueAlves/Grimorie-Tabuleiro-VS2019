#include "Posicao.h"

Posicao::Posicao(){
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Posicao::Posicao(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;
}

Posicao::~Posicao(){}

int Posicao::getX(){
    return this->x;
}

int Posicao::getY(){
    return this->y;
}

int Posicao::getZ(){
    return this->z;
}

void Posicao::addPosicao(int x, int y, int z){
    this->x = this->x + x;
    this->y = this->y + y;
    this->z = this->z + z;
}

string Posicao::toString(){
    return to_string(this->x) + to_string(this->y) + to_string(this->z);
}