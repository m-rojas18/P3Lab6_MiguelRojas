#include "INTEGER.hpp"
#include <iostream>
void INTEGER::operator<<(int valor){
    entero = valor;
}

void INTEGER::operator!(){
    std::cout << entero << std::endl;
}

INTEGER INTEGER::operator+(int valor_suma){
    INTEGER temporal;
    temporal << entero + valor_suma;
    return temporal;
}
INTEGER INTEGER::operator-(int valor_resta){
    INTEGER temporal;
    temporal << entero - valor_resta;
    return temporal;
}

INTEGER INTEGER::operator*(int valor_multiplicacion){
    INTEGER temporal;
    temporal << entero * valor_multiplicacion;
    return temporal;
}

INTEGER INTEGER::operator/(int valor_division){
    INTEGER temporal;
    temporal << entero / valor_division;
    return temporal;
}

INTEGER::~INTEGER(){}