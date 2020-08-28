#include "CHAR.hpp"
#include <iostream>

void CHAR::operator<<(char caracter){
    this->caracter = caracter;
}

void CHAR::operator!(){
    std::cout << this->caracter << endl;
}

CHAR::~CHAR(){}