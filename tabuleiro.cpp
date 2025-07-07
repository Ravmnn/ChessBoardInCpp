#include "tabuleiro.h"
#include <string>
#include <iostream>

Tabuleiro::Tabuleiro(){}
void Tabuleiro::inicializar(){
    const char layout[8][9] = {
    "rnbqkbnr",
    "pppppppp",
    "        ",
    "        ",
    "        ",
    "        ",
    "PPPPPPPP",
    "RNBQKBNR"
    };
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            casas[i][j] = layout[i][j];
        }
    }
}
void Tabuleiro::mostrar(){
    std::cout<<"  A B C D E F G H"<< std::endl;
    for(int i = 0; i < 8; i++){
        std::cout<<8 - i<<" ";
        for(int j = 0; j < 8; j++){
            char peca = casas[i][j];
            std::string fundo = ((i+j)%2 == 0)? "47" : "42";

            if(std::islower (peca)){
                std::cout<< "\033[30;" << fundo << "m" << peca << " \033[0m";
            }else{
                std::cout<< "\033[37;" << fundo << "m" << peca << " \033[0m";
            }
        }
    std::cout << std::endl;
    }
}