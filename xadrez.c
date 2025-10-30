#include <stdio.h>

int main() {
    // O cavalo se move em "L": 2 casas em uma direção e 1 casa na outra.
    // Aqui ele vai se mover 2 casas para frente e 1 para a direita.

    int i, j; // Variáveis para os loops
    int movimento_vertical = 2;   // Quantas casas o cavalo anda para frente
    int movimento_horizontal = 1; // Quantas casas o cavalo anda para o lado

    printf("Movimento do Cavalo:\n");
    printf("2 casas para Frente e 1 casa para Direita\n\n");

    // Loop externo: move o cavalo para frente
    for (i = 0; i < movimento_vertical; i++) {
        printf("Frente\n");

        // Loop interno: move o cavalo para o lado apenas no final
        if (i == movimento_vertical - 1) { // Quando terminar de ir pra frente
            for (j = 0; j < movimento_horizontal; j++) {
                printf("Direita\n");
            }
        }
    }

    return 0;
}