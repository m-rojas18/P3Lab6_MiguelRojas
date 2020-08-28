#include <string>
// #include "CHAR.hpp"

#ifndef STRING_H
#define STRING_H

class STRING{

private://Atributo
    std::string cadena;
public:
    //Meteodos de Sobrecarga
    void operator<<(std::string);
    void operator<<(STRING);
    void operator!();
    STRING operator*(int);
};
#endif