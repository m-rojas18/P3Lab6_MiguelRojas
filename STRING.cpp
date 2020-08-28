#include "STRING.hpp"
#include "CHAR.hpp"
#include <iostream>
#include <cstring>
using namespace std;

void STRING::operator<<(string cadena){
    this->cadena = cadena;
}

void STRING::operator!(){
    cout << this->cadena << endl;
}

STRING STRING::operator+(string cadena2){
    string cadena_temporal;
    cadena_temporal = cadena + cadena2;
    STRING nueva_cadena;
    nueva_cadena << cadena_temporal;

    return nueva_cadena;

}
