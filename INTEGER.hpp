
#pragma once
class INTEGER{
private: //Atributo
    int entero;

public:
    //Metodos de Sobrecarga de Operadores
    void operator<<(int);
    void operator<<(INTEGER);
    void operator!();
    //Metodos Matematicos

    INTEGER operator+(INTEGER); //Suma
    int operator-(int); //Resta
    int operator*(int); //Multiplicacion
    int operator/(int); //Division
    ~INTEGER();
};