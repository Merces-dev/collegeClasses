#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float qtDias, dias, meses, anos;


    scanf("%i", qtDias);

    anos = qtDias div 365;
    meses = qtDias % 365 div 30;
    dias = qtDias % 365 % 30;

    printf("\n\n Anos: %i\n\n Meses: %i\n\n Dias: %i", anos, meses, dias);
    printf("\n\n\n");
    return 0;
}
