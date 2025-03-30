#include <stdio.h>

// Constantes para direções básicas
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

// Protótipos atualizados
void moverBispoRecursivo(int casas, int atual, int coluna, int linha);
void moverBispoLoopsAninhados(int casas, int coluna, int linha);
void moverTorreRecursivo(int casas, int atual, int coluna, int linha);
void moverRainhaRecursivo(int casas, int atual, int coluna, int linha);
void moverCavaloComplexo(int passos, int coluna, int linha);
void imprimirDirecao(const char* direcao);
void obterCoordenada(int col, int lin, char* coord);
int lerEntrada(const char* mensagem);

int main() {
    printf("=== SISTEMA AVANCADO DE MOVIMENTACAO - MATECHECK (NIVEL MESTRE) ===\n\n");
    
    // Entrada manual
    printf("Digite o numero de casas para cada peça:\n");
    int bispo_casas = lerEntrada("Bispo (movimento diagonal): ");
    int torre_casas = lerEntrada("Torre (movimento horizontal): ");
    int rainha_casas = lerEntrada("Rainha (movimento horizontal): ");
    int cavalo_passos = lerEntrada("Cavalo (quantidade de movimentos em L): ");

    // Posições iniciais (podem ser ajustadas)
    int bispo_col = 2, bispo_lin = 2;  // Bispo começa em B2
    int torre_col = 1, torre_lin = 1;  // Torre começa em A1
    int rainha_col = 8, rainha_lin = 1; // Rainha começa em H1
    int cavalo_col = 3, cavalo_lin = 1; // Cavalo começa em C1

    // Versão recursiva das peças com coordenadas
    printf("\nBISPO (RECURSIVO - Diagonal a partir de B2):\n");
    moverBispoRecursivo(bispo_casas, 1, bispo_col, bispo_lin);
    
    printf("\nBISPO (LOOPS ANINHADOS - Diagonal a partir de B2):\n");
    moverBispoLoopsAninhados(bispo_casas, bispo_col, bispo_lin);
    
    printf("\nTORRE (RECURSIVA - Direita a partir de A1):\n");
    moverTorreRecursivo(torre_casas, 1, torre_col, torre_lin);
    
    printf("\nRAINHA (RECURSIVA - Esquerda a partir de H1):\n");
    moverRainhaRecursivo(rainha_casas, 1, rainha_col, rainha_lin);
    
    printf("\nCAVALO (LOOPS COMPLEXOS - Movimentos em L a partir de C1):\n");
    moverCavaloComplexo(cavalo_passos, cavalo_col, cavalo_lin);
    
    return 0;
}

/**
 * Converte coordenadas numéricas para notação de xadrez (ex: 1,1 -> "A1")
 */
void obterCoordenada(int col, int lin, char* coord) {
    coord[0] = 'A' + col - 1;
    coord[1] = '1' + lin - 1;
    coord[2] = '\0';
}

/**
 * Bispo com recursão e coordenadas
 */
void moverBispoRecursivo(int casas, int atual, int coluna, int linha) {
    if (atual > casas) return;
    
    char coord[3];
    obterCoordenada(coluna + atual - 1, linha + atual - 1, coord);
    
    printf("%s: %s + %s\n", coord, CIMA, DIREITA);
    moverBispoRecursivo(casas, atual + 1, coluna, linha);
}

/**
 * Bispo com loops aninhados e coordenadas
 */
void moverBispoLoopsAninhados(int casas, int coluna, int linha) {
    for (int v = 1; v <= casas; v++) {
        char coord[3];
        obterCoordenada(coluna + v - 1, linha + v - 1, coord);
        
        printf("%s: %s + %s\n", coord, CIMA, DIREITA);
    }
}

/**
 * Torre recursiva com coordenadas
 */
void moverTorreRecursivo(int casas, int atual, int coluna, int linha) {
    if (atual > casas) return;
    
    char coord[3];
    obterCoordenada(coluna + atual - 1, linha, coord);
    
    printf("%s: %s\n", coord, DIREITA);
    moverTorreRecursivo(casas, atual + 1, coluna, linha);
}

/**
 * Rainha recursiva com coordenadas
 */
void moverRainhaRecursivo(int casas, int atual, int coluna, int linha) {
    if (atual > casas) return;
    
    char coord[3];
    obterCoordenada(coluna - atual + 1, linha, coord);
    
    printf("%s: %s\n", coord, ESQUERDA);
    moverRainhaRecursivo(casas, atual + 1, coluna, linha);
}

/**
 * Cavalo com loops complexos e coordenadas
 */
void moverCavaloComplexo(int passos, int coluna, int linha) {
    for (int l = 1; l <= passos; l++) {
        char inicio[3], fim[3];
        int nova_col = coluna + (l-1)*1;
        int nova_lin = linha + (l-1)*2;
        
        obterCoordenada(nova_col, nova_lin, inicio);
        obterCoordenada(nova_col + 1, nova_lin + 2, fim);
        
        printf("Movimento %d: %s -> %s\n", l, inicio, fim);
        printf("  - Passo 1: %s + %s\n", CIMA, CIMA);
        printf("  - Passo 2: %s\n", DIREITA);
    }
}

/**
 * Função auxiliar para imprimir direções
 * @param direcao Direção a ser impressa
 */
void imprimirDirecao(const char* direcao) {
    printf("%s", direcao);
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
