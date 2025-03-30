#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para direções básicas
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

// Funções de movimentação
void moverBispo(int casas);
void moverTorre(int casas);
void moverRainha(int casas);
int lerEntrada(const char* mensagem);

int main() {
    printf("=== SISTEMA DE TESTE DE MOVIMENTACAO - MATECHECK ===\n\n");
    
    // Entrada manual
    printf("Digite o numero de casas para cada peça:\n");
    int bispo_casas = lerEntrada("Bispo (movimento diagonal): ");
    int torre_casas = lerEntrada("Torre (movimento horizontal): ");
    int rainha_casas = lerEntrada("Rainha (movimento horizontal): ");

    // Movimento do Bispo (usando for)
    printf("\nTESTE DO BISPO:\n");
    moverBispo(bispo_casas);
    
    // Movimento da Torre (usando while)
    printf("\nTESTE DA TORRE:\n");
    moverTorre(torre_casas);
    
    // Movimento da Rainha (usando do-while)
    printf("\nTESTE DA RAINHA:\n");
    moverRainha(rainha_casas);
    
    return 0;
}

/**
 * Leitura da entrada
 * @param mensagem Mensagem a ser exibida para o usuário
 * @return Valor digitado pelo usuário
 */
int lerEntrada(const char* mensagem) {
    int valor;
    printf("%s", mensagem);
    while(scanf("%d", &valor) != 1 || valor <= 0) {
        printf("Entrada invalida! Digite um numero positivo: ");
        while(getchar() != '\n'); // Limpa o buffer do teclado
    }
    return valor;
}

/**
 * Move o Bispo na diagonal superior direita
 * @param casas Número de casas a mover
 */
void moverBispo(int casas) {
    printf("Movimento diagonal superior direita (%d casas):\n", casas);
    for(int i = 1; i <= casas; i++) {
        printf("Casa %d: %s + %s\n", i, CIMA, DIREITA);
    }
}

/**
 * Move a Torre para a direita
 * @param casas Número de casas a mover
 */
void moverTorre(int casas) {
    printf("Movimento para direita (%d casas):\n", casas);
    int i = 1;
    while(i <= casas) {
        printf("Casa %d: %s\n", i, DIREITA);
        i++;
    }
}

/**
 * Move a Rainha para a esquerda
 * @param casas Número de casas a mover
 */
void moverRainha(int casas) {
    printf("Movimento para esquerda (%d casas):\n", casas);
    int i = 1;
    do {
        printf("Casa %d: %s\n", i, ESQUERDA);
        i++;
    } while(i <= casas);
}
