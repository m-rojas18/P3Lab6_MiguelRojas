#pragma once
class CHAR{

private: //Atributo
    char caracter;

public:
    //Metodos de Sobrecarga de Operadores
    void operator<<(char);
    void operator!();
    ~CHAR();//Destructor
};

