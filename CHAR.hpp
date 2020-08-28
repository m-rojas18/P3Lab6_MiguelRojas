#pragma once
//#include "STRING.hpp"
class CHAR{

private: //Atributo
    char caracter;

public:
    //Metodos de Sobrecarga de Operadores
    void operator<<(char);
    void operator!();
   // STRING operator+(CHAR);
    ~CHAR();//Destructor
};

