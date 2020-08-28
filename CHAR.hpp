#include "STRING.hpp"

#ifndef CHAR_H
#define CHAR_H

class CHAR{

private: //Atributo
    char caracter;

public:
    //Metodos de Sobrecarga de Operadores
    STRING operator+(CHAR);
    void operator<<(char);
    void operator<<(CHAR);
    void operator!();
    ~CHAR();//Destructor
};

#endif
