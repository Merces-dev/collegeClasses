#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, n4, media;

    printf("\nDigite a Primeira nota: \n");
    scanf("%f", &n1);
    printf("\nDigite a Segunda nota: \n");
    scanf("%f", &n2);
    printf("\nDigite a Terceira nota: \n");
    scanf("%f", &n3);
    printf("\nDigite a Quarta nota: \n");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("\n\nA nota 1 é: %0.2f \n\nA nota 2 é: %0.2f \n\nA nota 3 é: %0.2f\n\nA nota 4 é: %0.2f \n\nA média é: %0.2f\n\n", n1, n2, n3, n4, media);

    if(media >= 6){
        if(media == 10){
            printf("Parabéns!!! O aluno foi aprovado com media máxima");
        }
        printf("\nAprovado com media %0.2f", media);
    }else if (media < 6 && media >= 3){
        printf("O aluno ficou de recuperação com media %0.2f", media);
    }else{
        printf("O aluno foi reprovado com media %0.2f", media);
    };

    printf("\n\n\n");
    return 0;
}
