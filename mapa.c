#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"

void aloca_mapa(MAPA* m){
m->matriz = malloc(sizeof(char*) * m->linhas);
    for (int i = 0; i < m->linhas; i++){
        m->matriz[i] = malloc(sizeof(char) * m->colunas + 1);
    }

}
void libera_mapa(MAPA* m){
    for(int i = 0; i < (m->linhas); i++){
        free(m->matriz[i]);
    }
    free(m->matriz);
    }

void abre_mapa(MAPA* m){
    FILE* f;
    f = fopen("mapa2.txt","r");
    if (f == 0){
        printf("Erro de leitura \n\n");
        exit(1);}

    fscanf(f,"%d %d", &(m->linhas), &(m->colunas));
    aloca_mapa(m);

    for(int i = 0; i < m->linhas; i++){
        fscanf(f,"%s", m->matriz[i]);}




    fclose(f);
}

void imprime_mapa(MAPA* m){
for(int i = 0; i < m->linhas; i++){
        printf("%s\n", m->matriz[i]);
    }
}
