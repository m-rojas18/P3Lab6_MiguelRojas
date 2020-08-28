#ifndef INTEGER_H
#define INTEGER_H

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
    INTEGER operator-(INTEGER); //Resta
    INTEGER operator*(INTEGER); //Multiplicacion
    INTEGER operator/(INTEGER); //Division
    ~INTEGER();
};

#endif