#include "xadrez.h"
#include <string>
#include <iostream>

Tabuleiro::Tabuleiro(){}

/*inicialização do tabuleiro*/

void Tabuleiro::inicializar(){

    const char layout[8][8] = {
    {'r','n','b','q','k','b','n','r'},
    {'p','p','p','p','p','p','p','p'},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' '},
    {'P','P','P','P','P','P','P','P'},
    {'R','N','B','Q','K','B','N','R'},
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
                std::cout<< "\033[35;" << fundo << "m" << peca << " \033[0m";
            }else{
                std::cout<< "\033[31;" << fundo << "m" << peca << " \033[0m";
            }
        }
    std::cout<<8 - i<<" ";
    std::cout << std::endl;
    }
    std::cout<<"  A B C D E F G H"<< std::endl;
}
/*------------------------------
implementaçao do movimento      
lo = linha Origem
co = coluna origem
ld = linha destino
cd = coluna destino
--------------------------------*/
bool Tabuleiro::movimento(int lo,int co,int ld,int cd){
    //verificar o movimento está dentro do intervalo do tabuleiro
    if(co < 0 ||co > 7 || lo < 0 ||lo > 7 || cd < 0 ||cd > 7 || ld < 0 ||ld > 7)return false;

    //declarando origem e destino da peça
    char pecaOrigem = casas[co][lo];
    char pecaDestino = casas[cd][ld];

    //verificar se existe uma peça na origem

    if(pecaOrigem == ' ')return false;

    //se a peça destino for cor igual a peça origem ou

    if(std::isupper(pecaOrigem) && std::isupper(pecaDestino)|| 
    std::islower(pecaOrigem) && std::islower(pecaDestino)) return false;

    //movimento simples

    casas[cd][ld] = pecaOrigem;
    casas[co][lo] = ' ';

    return true;
}
char Tabuleiro::peca(int coluna,int linha){
    return casas[linha][coluna];
}