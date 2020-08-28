#pragma once
#include <string>
#include "CHAR.hpp"
class STRING{

private://Atributo
    std::string cadena;
public:
    //Meteodos de Sobrecarga
    void operator<<(std::string);
    void operator!();
    STRING operator+(std::string);
};