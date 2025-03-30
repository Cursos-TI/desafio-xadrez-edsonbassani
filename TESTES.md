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
Bispo (movimento diagonal): 5
Torre (movimento horizontal): 5
Rainha (movimento horizontal): 8

TESTE DO BISPO:
Movimento diagonal superior direita (5 casas):
Casa 1: Cima + Direita
Casa 2: Cima + Direita
Casa 3: Cima + Direita
Casa 4: Cima + Direita
Casa 5: Cima + Direita

TESTE DA TORRE:
Movimento para direita (5 casas):
Casa 1: Direita
Casa 2: Direita
Casa 3: Direita
Casa 4: Direita
Casa 5: Direita

TESTE DA RAINHA:
Movimento para esquerda (8 casas):
Casa 1: Esquerda
Casa 2: Esquerda
Casa 3: Esquerda
Casa 4: Esquerda
Casa 5: Esquerda
Casa 6: Esquerda
Casa 7: Esquerda
Casa 8: Esquerda
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