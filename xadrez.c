#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // Condição de parada
    }
    printf("Casa %d: Direita\n", casasRestantes);
    moverTorre(casasRestantes - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // Condição de parada
    }
    printf("Casa %d: Esquerda\n", casasRestantes);
    moverRainha(casasRestantes - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) {
        return; // Condição de parada
    }
    printf("Casa %d: Cima, Direita\n", casasRestantes);
    moverBispoRecursivo(casasRestantes - 1); // Chamada recursiva
}

// Função com loops aninhados para o movimento do Bispo
void moverBispoLoopsAninhados(int casas) {
    for (int i = 1; i <= casas; i++) { // Loop externo: vertical (cima)
        for (int j = 1; j <= casas; j++) { // Loop interno: horizontal (direita)
            if (i == j) { // Movimento diagonal
                printf("Casa %d: Cima, Direita\n", i);
            }
        }
    }
}

// Movimento do Cavalo com loops aninhados complexos
void moverCavalo() {
    int casasVerticais = 2; // Duas casas para cima
    int casasHorizontais = 1; // Uma casa para a direita

    for (int i = 1; i <= casasVerticais; i++) { // Loop externo: vertical (cima)
        printf("Casa %d: Cima\n", i);
    }

    for (int j = 1; j <= casasHorizontais; j++) { // Loop interno: horizontal (direita)
        if (j > casasHorizontais) {
            break; // Sai do loop se necessário
        }
        printf("Casa %d: Direita\n", j);
    }
}

int main() {
    // Número de casas a serem movidas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da Torre (usando recursão)
    printf("\nMovimento da Torre (5 casas para a Direita):\n");
    moverTorre(casasTorre);

    // Movimento do Bispo (usando recursão)
    printf("\nMovimento do Bispo (5 casas na diagonal para Cima e Direita - Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    // Movimento do Bispo (usando loops aninhados)
    printf("\nMovimento do Bispo (5 casas na diagonal para Cima e Direita - Loops Aninhados):\n");
    moverBispoLoopsAninhados(casasBispo);

    // Movimento da Rainha (usando recursão)
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo (usando loops aninhados complexos)
    printf("\nMovimento do Cavalo (2 casas para Cima e 1 casa para a Direita):\n");
    moverCavalo();

    return 0;
}


