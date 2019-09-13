#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "Default.h"
#include "Posicao.h"
#include "Componente.h"
#include "Peca.h"
#include "Terreno.h"

class Tabuleiro
{
private:
    int x,y,z;
    map<string, shared_ptr<Componente>> tab_comp;
    map<string, shared_ptr<Peca>> tab_pecas;
    map<string, shared_ptr<Terreno>> tab_terrenos;
    // map<string, Obstaculos*> tab_obstaculos;
    // map<string, Item> tab_itens;
    vector<vector<vector<Peca>>> tabuleiro_peca;
    vector<vector<vector<int>>> tabuleiro_altura;
    vector<vector<vector<int>>> tabuleiro_tipo_componentes;
public:
     //Construtores
    Tabuleiro();
    Tabuleiro(int x, int y, int z);
    ~Tabuleiro();
    //Gets
    int getX();
    int getY();
    int getZ();
    map<string, shared_ptr<Peca>> getTabPeca();
    map<string, shared_ptr<Componente>> getTabComp();
    // Sets
    void setTabComp(map<string, shared_ptr<Componente>>);
    //Funções
    void montarMatrix();
    bool verificarOcupacao(Posicao pos);
    bool verificarPosicaoValida(Posicao pos);
    bool adicionarPeca(Posicao pos, shared_ptr<Componente> componente);
    shared_ptr<Componente> removerPeca(Posicao pos);
    bool moverPeca(Posicao ini, Posicao end);
    string definirComponente(shared_ptr<Componente> componente);
    void adicionarMapEspecifico(shared_ptr<Componente> componente);
    void removerMapEspecifico(shared_ptr<Componente> componente);
    shared_ptr<Componente> verificarPeca(Posicao pos);

    string toString();
};

#endif