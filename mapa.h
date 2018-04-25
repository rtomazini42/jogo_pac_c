

struct mapa{
    char** matriz;
    int linhas;
    int colunas;};
typedef struct mapa MAPA;

//assinatura de funções abaixo
void abre_mapa(MAPA* m);
void aloca_mapa(MAPA* m);
void libera_mapa(MAPA* m);

int acabou();
void imprime_mapa(MAPA* m);
//void mover(char direcao);




