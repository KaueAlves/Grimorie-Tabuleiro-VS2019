#if !defined(ITEM_H)
#define ITEM_H

#include "Default.h"
#include "Posicao.h"
#include "Componente.h"

class Item : public Componente
{
private:
    /* data */
public:
    Item(/* args */);
    ~Item();
    // Funções
    string toString();
};




#endif // TERRENO_H
