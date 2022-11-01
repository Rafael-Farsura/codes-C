#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define EXEMPLO  
//  é como se declara constantes, tipicamente o nome MAIUSCULO. 


int main(){
    printf(" .--.            .--.              \n");
    printf(" ( (`\.----``--.//`) )               \n");
    printf("  '-.   __   __    .-'               \n");
    printf("   /   /__\ /__\   \       BEM VINDO \n");
    printf("  |    \ 0/ \ 0/    |        AO JOGO \n");
    printf("  \     `/   \`     /  DA ADVINHAÇÃO \n");
    printf("   `-.  /-----\  .-`                 \n");
    printf("     /  '.___.'  \                   \n");
    printf("     \     I     /                   \n");
    printf("      `;--'`'--;`                    \n");
    printf("        '.___.'                      \n\n");

    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int tentativas = 1;
    int chute;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual é o nivel de dificuldade ?\n");
    printf ("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    

    int numerodetentativas;
    switch (nivel){
        case 1:
            numerodetentativas = 20;
        case 2:
            numerodetentativas = 15;
        default:
            numerodetentativas = 6;
    }
    

    for (int i = 1; i <= numerodetentativas; i++){
        printf("Tentativa %d \n", tentativas);
        printf("Qual o seu chute?");

        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);
        

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (chute < 0){
            printf("Nao use numeros negativos\n");
            continue;
        }
        if (acertou) {
            break;
        }
        else if(maior){
            printf("Seu numero foi maior que o numero secreto\n");
            } 
        else {
                printf("Seu numero foi menor que o numero secreto\n");
            }
        tentativas++;

        double pontosperdidos= abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }
    if (acertou){
        printf("Você ganhou !");
        printf("Você acertou em %d tentativas! \n", tentativas);
        printf("Total de pontos: %.2f\n", pontos);
    } 
    else {
        printf("Você perdeu! Tente novamente!! \n")  ;      
    }
}
