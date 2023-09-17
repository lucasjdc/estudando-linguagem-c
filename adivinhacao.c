#include <stdio.h>
#include <locale.h>
#define NUMERO_DE_TENTATIVAS 5

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("***************************\n");
    printf("*** Jogo de adivinhação ***\n");
    printf("***************************\n");
    int tentativas = 1;
    int numerosecreto =  42;
    char *palavratentativa;
    while (tentativas <= NUMERO_DE_TENTATIVAS){
        printf("Tentativa %d de %d\n", tentativas, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu palpite: ");
        int palpite = 0;
        scanf("%d", &palpite);
        int acertou = palpite == numerosecreto;
        if (acertou){
            printf("Você descobriu o número secreto.\n");
            if (tentativas > 1){
                palavratentativa = "tentativas";
            } else {
                palavratentativa = "tentativa";
            }
            printf("Você descobriu o número secreto com %d %s.\n", tentativas, palavratentativa);
            break;
        } else if (palpite > numerosecreto){
            printf("O número secreto é menor.\n");
        } else {
            printf("O número secreto é maior.\n");
        }
        tentativas = tentativas + 1;
    }
}
