#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <string>
#include <vector>
#include <cmath>

class Tabuleiro{
    public:
        Tabuleiro();
        void inicializar();
        void mostrar();
        bool movimento(int colunaOrigem,int linhaOrigem,int colunaDestino, int linhaDestino);
        char peca(int coluna, int linha);

        private: char casas[8][8];
};
class pecas{

};

#endif 