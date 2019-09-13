#ifndef PECA_H
#define PECA_H

#include "Default.h"
#include "Posicao.h"
#include "Componente.h"
#include "Atributos.h"
#include "Info.h"

using namespace std;

class Peca : public Componente
{
private:
    int qntMovimentos, qntMaxMovimentos;
    Info info;
    Atributos atributos;
    Times_Jogo time;
public:
    //Construtor - Destruidor
    Peca(pair<int,int> tamanho,Times_Jogo time);
    virtual ~Peca();
    
    //Gets
    int getQntMaxMovimetnos();
    int getQntMovimentos();
    Times_Jogo getTime();
    Info getInfo();
    Atributos* getAtributos();

    //Sets
    void setQntMaxMovimentos(int qntMaxMovimentos);
    void setQntMovimentos(int qntMovimentos);
    void setAtributos(Atributos atb);


    //Funções
    bool movimentosPossiveis(Posicao pos);
    string toString();
};

#endif