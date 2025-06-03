#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10

int main() {
    char tabuleiro[LINHAS][COLUNAS];

    // Preencher o tabuleiro com '0' (água)
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    // Adicionar habilidades especiais
    int centroX = 5, centroY = 5; // Ponto central para exemplo
    
    // Cone
    for (int i = 0; i < 3; i++) {
        for (int j = -i; j <= i; j++) {
            if (centroX + i < LINHAS && centroY + j >= 0 && centroY + j < COLUNAS) {
                tabuleiro[centroX + i][centroY + j] = '5';
            }
        }
    }

    // Cruz
    for (int i = -2; i <= 2; i++) {
        if (centroX + i >= 0 && centroX + i < LINHAS) {
            tabuleiro[centroX + i][centroY] = '5';
        }
        if (centroY + i >= 0 && centroY + i < COLUNAS) {
            tabuleiro[centroX][centroY + i] = '5';
        }
    }

    // Octaedro
    for (int i = -2; i <= 2; i++) {
        for (int j = -2 + abs(i); j <= 2 - abs(i); j++) {
            if (centroX + i >= 0 && centroX + i < LINHAS && centroY + j >= 0 && centroY + j < COLUNAS) {
                tabuleiro[centroX + i][centroY + j] = '5';
            }
        }
    }

    // Imprimir tabuleiro
    printf("   A  B  C  D  E  F  G  H  I  J\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("%2d", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            printf(" %c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

