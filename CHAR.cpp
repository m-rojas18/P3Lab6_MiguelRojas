#include "CHAR.hpp"
#include <string>
#include <iostream>
using namespace std;

void CHAR::operator<<(char caracter){
    this->caracter = caracter;
}

void CHAR::operator!(){
    cout << this->caracter << endl;
}

string CHAR::operator+(char caracter_acumular){
    string cadena_temporal = caracter;
    cadena_temporal += caracter_acumular;
    return cadena_temporal;
}

CHAR::~CHAR(){}