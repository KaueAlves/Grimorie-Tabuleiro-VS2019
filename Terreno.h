#if !defined(TERRENO_H)
#define TERRENO_H

#include "Default.h"
#include "Componente.h"

class Terreno : public Componente
{
private:
    /* data */
public:
    Terreno(/* args */);
    ~Terreno();
    // Funçõe
    string toString();
};




#endif // TERRENO_H
