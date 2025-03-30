# Testes do Sistema de Movimentação de Peças - MateCheck

## Teste de Funcionamento Básico

### Cenário 1: Movimentação padrão das peças

**Entradas:**
5 [Enter]
5 [Enter]
8 [Enter]


**Saída Esperada:**
```plaintext
=== SISTEMA DE TESTE DE MOVIMENTACAO - MATECHECK ===

Digite o numero de casas para cada peça:
Bispo (movimento diagonal): 2
Torre (movimento horizontal): 3
Rainha (movimento horizontal): 1
Cavalo (quantidade de movimentos em L): 2

TESTE DO BISPO:
Movimento diagonal superior direita (2 casas):
Casa 1: Cima + Direita
Casa 2: Cima + Direita

TESTE DA TORRE:
Movimento para direita (3 casas):
Casa 1: Direita
Casa 2: Direita
Casa 3: Direita

TESTE DA RAINHA:
Movimento para esquerda (1 casas):
Casa 1: Esquerda

TESTE DO CAVALO:
Movimento em L (2 casas):
Movimento 1: Baixo + Baixo + Esquerda
Movimento 2: Baixo + Baixo + Esquerda
```

### Cenário 2: Entradas Inválidas
**Entradas:**
abc [Enter]
-3 [Enter]
0 [Enter]
5 [Enter]

```plaintext
=== SISTEMA DE TESTE DE MOVIMENTACAO - MATECHECK ===

Digite o numero de casas para cada peça:
Bispo (movimento diagonal): abc
Entrada invalida! Digite um numero positivo: -3 
Entrada invalida! Digite um numero positivo: 0
Entrada invalida! Digite um numero positivo: 5
Torre (movimento horizontal): 
```