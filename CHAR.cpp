#include "CHAR.hpp"
#include "STRING.hpp"
#include <cstring>
#include <iostream>

void CHAR::operator<<(char caracter){
    this->caracter = caracter;
}

void CHAR::operator!(){
    std::cout << this->caracter << std::endl;
}

/*STRING CHAR::operator+(CHAR segundo_caracter){
    char caracter2 = static_cast<char>(segundo_caracter);
    std::string cadena_temporal = caracter;
    cadena_temporal += caracter2;
    STRING nueva_cadena;
    nueva_cadena << cadena_temporal;
    return nueva_cadena;
}*/


CHAR::~CHAR(){}