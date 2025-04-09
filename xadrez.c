#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    short int escolha;
    do{
        printf("------Movimentacoes de pecas de xadrez------\n");
        printf("1.Torre\n");
        printf("2.Bispo\n");
        printf("3.Rainha\n");
        scanf("%hd", &escolha);

        switch(escolha){
            case 1:
                for(int i = 0; i < 5; i++){
                    printf("Direita\n");
                }
                break;
            case 2:
                for(int i = 0; i < 5; i++){
                    printf("Cima, Direita\n");
                }
                break;
            case 3:
                for(int i = 0; i < 8; i++){
                    printf("Esquerda\n");
                }
                break;
            default:
                printf("Opcao invalida, digite novamente:\n");
                break;
        }
    } while(escolha < 1 || escolha > 3);

    return 0;
}