#include <stdio.h> 
#define LIMITE 5

// DEFINE é como se declara constantes, tipicamente o nome MAIUSCULO. 

int main(){
    printf("*********************************************\n");
    printf("**Bem vindo ao nosso jogo de advinhacao**\n");
    printf("*********************************************\n");

    int numerosecreto = 42;
    int chute ;

    for(int i = 1; i <= LIMITE; i++) {
        printf("Tentativa %d de %d \n", i, LIMITE);
        printf("Qual é o seu chute?");
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);
        
        int acertou = (chute == numerosecreto);

        if (acertou) {
            printf("Parabéns, acertou!\n");
            printf("Jogue novamente!");
            break;
        } else {

            int maior = chute > numerosecreto;        
            
            if(maior){
                printf("Seu numero foi maior que o numero secreto\n");
            } else {
                printf("Seu numero foi menor que o numero secreto\n");
            }
        }
    }
}