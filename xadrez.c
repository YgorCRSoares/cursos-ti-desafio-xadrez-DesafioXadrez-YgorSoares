#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato -------------------------------------------------------

    // Variáveis pra controle de movimento das peças
    int casas_torre = 5;           // Torre: 5 casas para direita
    int casas_bispo = 5;           // Bispo: 5 casas diagonal cima-direita
    int casas_rainha = 8;          // Rainha: 8 casas para esquerda
    int casas_cavalo_baixo = 2;    // Cavalo: 2 casas para baixo
    int casas_cavalo_esquerda = 1; // Cavalo: 1 casa para esquerda
    int i, j;                      // Contadores genéricos

    // Movimento da torre
    printf("Movimento da Torre (%d casas para direita):\n", casas_torre);
    for (i = 1; i <= casas_torre; i++)
    {
        printf("Direita %d\n", i);
    }
    printf("\n");

    // Movimento do bispo com while
    printf("Movimento do Bispo (%d casas diagonal cima-direita):\n", casas_bispo);
    i = 1;
    while (i <= casas_bispo)
    {
        printf("Cima, Direita %d\n", i);
        i++;
    }
    printf("\n");

    // Movimento da raina com do...while
    printf("Movimento da Rainha (%d casas para esquerda):\n", casas_rainha);
    i = 1;
    do
    {
        printf("Esquerda %d\n", i);
        i++;
    } while (i <= casas_rainha);
    printf("\n");

    // Nível Aventureiro -------------------------------------------------------

    printf("Movimento do Cavalo (2 casas para baixo, 1 casa para esquerda):\n");
    // Loop externo para controlar o movimento em "L" do cavalo
    for (i = 1; i <= 1; i++)
    {
        for (j = 1; j <= casas_cavalo_baixo; j++) // Primeiro movimento para baixo
        {
            printf("Baixo %d\n", j);
        }
        for (j = 1; j <= casas_cavalo_esquerda; j++) // Segundo movimento: uma casa para esquerda
        {
            printf("Esquerda %d\n", j);
        }
        printf("\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
