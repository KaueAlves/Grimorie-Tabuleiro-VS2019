#include "Terreno.h"

Terreno::Terreno(/* args */) : Componente(0,"Terreno","Terreno",make_pair(1,1))
{
    this->mark = "T";
    this->tamanho = tamanho;
    this->especializacao = Tipo_Componentes::comp_terreno;
}

Terreno::~Terreno()
{
}

string Terreno::toString(){
    return this->mark;
}