#include <stdio.h>

int main() {
    // Coluna
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    // Números laterais
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Tabuleiro 10x10
    char tabuleiro[10][10], posicao[5];

    
    
    // Preencher o tabuleiro com '0' (água)
    for( int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';  // Preencher com '0' para representar água
        }
    }

    // Imprimir título
    printf("JOGO DE TABULEIRO BATALHA NAVAL\n\n");


    //navio horizontal 
    tabuleiro[8][6] = '3';
    tabuleiro[8][7] = '3';
    tabuleiro[8][8] = '3';
    //navio diagonal
    tabuleiro[0][0] = '3';
    tabuleiro[1][1] = '3';
    tabuleiro[2][2] = '3';

    tabuleiro[9][0] = '3';
    tabuleiro[8][1] = '3';
    tabuleiro[7][2] = '3';
    //navio vertical
    tabuleiro[5][5] = '3'; 
    tabuleiro[6][5] = '3';
    tabuleiro[7][5] = '3';


    
    // Imprimir as letras das colunas
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c  ", coluna[i]);  // Imprimir as letras de A a J
    }
    printf("\n");

    // Imprimir as linhas com os números laterais e os valores do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d", linha[i]);  // Imprimir os números das linhas
        for (int j = 0; j < 10; j++) {
            printf(" %c ", tabuleiro[i][j]);  // Imprimir os valores do tabuleiro
        }
        printf("\n");
    }
    

    return 0;
}
