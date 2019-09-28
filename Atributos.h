#if !defined(ATRIBUTOS_H)
#define ATRIBUTOS_H

#include "Default.h"

class Atributos
{
private:
    int hp;
    int iniciativa;
    int dano;
    int tempoRecarga;
    int alcance;
public:
    Atributos(/* args */);
    Atributos(vector<int> atributos_valores);
    // Atributos(vector<Item> item,vector<Status>);
    ~Atributos();
    // Gets
    int getHP();
    int getIniciativa();
    int getDano();
    int getTempoRecarga();
    int getAlcance();
    // Sets
    void setHP(int hp);
    void setIniciativa(int iniciativa);
    void setDano(int dano);
    void setTempoRecarga(int tempoRecarga);
    void setAlcance(int alcance);
};


#endif // ATRIBUTOS_H
