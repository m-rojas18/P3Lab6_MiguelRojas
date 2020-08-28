
#pragma once
class INTEGER{
private: //Atributo
    int entero;

public:
    //Metodos de Sobrecarga de Operadores
    void operator<<(int);
    void operator!();
    //Metodos Matematicos

    INTEGER operator+(int); //Suma
    INTEGER operator-(int); //Resta
    INTEGER operator*(int); //Multiplicacion
    INTEGER operator/(int); //Division
    ~INTEGER();
};