#if !defined(INFO_H)
#define INFO_H

#include "Default.h"

class Info
{
private:
    string nome;
    int idade;
    string classe;
    string lore;
    char sexo;
public:
    Info(/* args */);
    ~Info();
    // GETS
    string getNome();
    int getIdade();
    string getClasse();
    string getLore();
    char getSexo();
    // SETS
    void setNome( string nome );
    void setIdade( int idade );
    void setClasse( string classe );
    void setLore( string lore );
    void setSexo( char sexo );
};

#endif // INFO_H
