#include"xadrez.h"
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    Tabuleiro t;
    t.inicializar();
    t.mostrar();

    bool white = true;
    
    while(true){

        string lance;
        
        cout << (white? "Vez das Brancas." : "Vez das pretas") << endl;
        cout << "Lance (ex: e4e5): " << endl;
        cin >> lance;
        
        if(lance.length() != 4){
            cout << "Entrada inválida. Tente Novamente." << endl;
            continue;
        }


        
        int c1 = lance[0] - 'a';
        int l1 = 8 - (lance[1] - '0');
        int c2 = lance[2] - 'a';
        int l2 = 8 - (lance[3] - '0');

        char peca = t.peca(c1, l1);

        if((white && !isupper(peca)) || (!white && !islower(peca))){
            cout << "Voce nao pode mover a peca adversaria" << endl;
            continue;
        }

        if(!t.movimento(c1,l1,c2,l2)){
            cout << "Movimento invalido" << endl;
            continue;
        }

        white = !white;

        system("cls");
        t.mostrar();

    }

    return 0;
}