#include <stdio.h>
#include <stdlib.h>
#include "fuga.h"
#include "mapa.h"



MAPA m;



int acabou(){
    return 0;
}



void mover(char direcao){
    int x,y;
    for(int i = 0; i < m.linhas; i++){
        for(int j = 0; j < m.colunas; j++){
            if (m.matriz[i][j]== '@'){
                x = i;
                y = j;
            }
        }
    }
    switch(direcao){
        case 'a':
            m.matriz[x][y-1] = '@';
            break;
        case 'd':
            m.matriz[x][y+1] = '@';
            break;
        case 's':
            m.matriz[x+1][y] = '@';
            break;
        case 'w':
            m.matriz[x-1][y] = '@';
            break;

    }
    m.matriz[x][y] = '.';
}

int main()
{



abre_mapa(&m);

    do{
         imprime_mapa(&m);
         char comando;
         scanf(" %c", &comando);
         mover(comando);

    }while(!acabou());

    libera_mapa(&m);

}
