#if !defined(COMPONENTE_H)
#define COMPONENTE_H

#include "Default.h"
#include "Posicao.h"

class Componente
{
protected:
    int id;
    string nome;
    string tipo;
    Posicao pos;
    string mark;
    pair<int,int> tamanho;
public:
    Tipo_Componentes especializacao;
    // Construtores
    Componente(int id,string nome, string tipo, pair<int,int> tamanho);
    virtual ~Componente();
    // Gets
    int getID();
    string getNome();
    string getTipo();
    Posicao getPosicao();
    pair<int,int> getTamanho();
    string getMark();
    // Sets
    void setID(int id);
    void setNome(string nome);
    void setTipo(string tipo);
    void setTipos(enum Tipo_Componentes);
    void setPosicao(Posicao pos);
    void setTamanho(pair<int,int> tamanho);
    void setMark(string mark);
    // Funçoes
    virtual string toString();
};



#endif // COMPONENTE_H
