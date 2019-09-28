#include "Item.h"

Item::Item(/* args */) : Componente(2,"Item","Item",make_pair(1,1))
{
    this->mark = "I";
    this->tamanho = tamanho;
    this->especializacao = Tipo_Componentes::comp_item;
}

Item::~Item()
{
}

string Item::toString(){
    return this->mark;
}

