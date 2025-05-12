#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverbispo(int casas) {
    if(casas > 0) {
        printf("cima, direita\n");
        moverbispo(casas - 1);
    }
}

void movertorre(int casas) {
    if(casas > 0) {
        printf("direita\n");
        movertorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if(casas > 0) {
        printf("esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    int bispo = 1;

    printf("Bispo: \n");

    while (bispo <= 5)
    {
        printf("cima esquerda\n");
        bispo++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    int Torre = 1;

    printf("Torre: \n");

    do{

        printf("direita\n");
        Torre++;

    } while (Torre <= 5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Rainha: \n");

    for (int Rainha = 1; Rainha <= 8; Rainha++)
    {
        printf("esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("cavalo:\n");

    int cavalo = 1;

    while(cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("baixo\n");
        }
        printf("esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    printf("bispo 2:\n");

    moverbispo(5);

    printf("bispo 3:\n");

    int Bispo = 5;

    while(Bispo--)
    {
        for (int i = 0; i < 1; i++) {
            printf("cima\n");
        }
        printf("direita\n");
    }

    printf("torre 2:\n");

    movertorre(5);

    printf("rainha 2:\n");

    moverRainha(8);
    
    for(int k = 0; k < 1; k++){
        for (int i = 0, j = 10; i < 2, j > 9; i++, j--) {
            printf("cima\n", i);
            printf("cima\n", j);
        }
        printf("direita", k);
    } 


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}