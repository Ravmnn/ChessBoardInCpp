#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <string>
#include <vector>
#include <cmath>

class Tabuleiro
{
    public:
        Tabuleiro();
        void inicializar();
        void mostrar();
    
    private: char casas[8][8];
};

#endif 