#include <stdio.h>

int main() {
    // Variáveis para controlar o número de casas a serem movidas
    int casasTorre = 5; // Número de casas para a Torre
    int casasBispo = 5; // Número de casas para o Bispo
    int casasRainha = 8; // Número de casas para a Rainha

    // Movimento da Torre (usando for)
    printf("\nMovimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do Bispo (usando while)
    printf("\nMovimento do Bispo (5 casas na diagonal para Cima e Direita):\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", j);
        j++;
    }

    // Movimento da Rainha (usando do-while)
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= casasRainha);

    // Separador para o movimento do Cavalo
    printf("______________________________________________________________________________\n");

    // Movimento do Cavalo (usando loops aninhados)
    printf("\nMovimento do Cavalo (2 casas para Baixo e 1 casa para a Esquerda):\n");

    // Loop externo (for): Move duas casas para baixo
    for (int i = 1; i <= 2; i++) {
        printf("Casa %d: Baixo\n", i);
    }

    // Loop interno (while): Move uma casa para a esquerda
    int contadorEsquerda = 1;
    while (contadorEsquerda <= 1) {
        printf("Casa %d: Esquerda\n", contadorEsquerda);
        contadorEsquerda++;
    }

    return 0;
}



