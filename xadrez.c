#include <stdio.h>

/* ---------------------------
   Função recursiva da TORRE
   Move-se para a direita
   --------------------------- */
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

/* ---------------------------
   Função recursiva da RAINHA
   Move-se para a esquerda
   --------------------------- */
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

/* ---------------------------
   Função recursiva do BISPO
   Move-se em diagonal:
   Direita + Cima
   --------------------------- */
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        printf("Cima\n");
        moverBispo(casas - 1);
    }
}

/* ---------------------------
   Função do CAVALO
   Move-se em "L": 
   2 casas para cima e 1 para a direita
   --------------------------- */
void moverCavalo() {
    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n");
}

/* ---------------------------
   Função principal
   --------------------------- */
int main() {
    printf("Cavalo 1 vez L cima direita\n");
    moverCavalo();

    printf("\nBispo 5 casas diagonal direita cima\n");
    moverBispo(5);

    printf("\nRainha 8 casas esquerda\n");
    moverRainha(8);

    printf("\nTorre 5 casas direita\n");
    moverTorre(5);

    return 0;
}
