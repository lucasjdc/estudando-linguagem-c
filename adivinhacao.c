#include <stdio.h>
#include <locale.h>
#define NUMERO_DE_TENTATIVAS 5

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("***************************\n");
    printf("*** Jogo de adivinha��o ***\n");
    printf("***************************\n");
    int tentativas = 1;
    int numerosecreto =  42;
    char *palavratentativa;
    while (tentativas <= NUMERO_DE_TENTATIVAS){
        printf("Tentativa %d de %d\n", tentativas, NUMERO_DE_TENTATIVAS);
        printf("Qual � o seu palpite: ");
        int palpite = 0;
        scanf("%d", &palpite);
        int acertou = palpite == numerosecreto;
        if (acertou){
            printf("Voc� descobriu o n�mero secreto.\n");
            if (tentativas > 1){
                palavratentativa = "tentativas";
            } else {
                palavratentativa = "tentativa";
            }
            printf("Voc� descobriu o n�mero secreto com %d %s.\n", tentativas, palavratentativa);
            break;
        } else if (palpite > numerosecreto){
            printf("O n�mero secreto � menor.\n");
        } else {
            printf("O n�mero secreto � maior.\n");
        }
        tentativas = tentativas + 1;
    }
}
