#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float litro, valorBruto, valorTotal, valorDesconto;
    int tipoComb;

    printf("\nDigite o tipo de combustivel a ser abastecidos (1- Álcool; 2- Gasolina):\n");
    scanf("%d", &tipoComb);

    printf("\nDigite o número de litros a serem abastecidos:\n");
    scanf("%f", &litro);

    if(tipoComb == 1){

        valorBruto = litro * 4.9;
        if(litro <= 20){
            valorDesconto = valorBruto * 0.03 ;
        }else{
            valorDesconto = valorBruto * 0.05 ;
        }
        printf("passou");
    }else if(tipoComb == 2){

        valorBruto = litro * 4.9;
        if(litro <= 20){
            valorDesconto = valorBruto * 0.04 ;
        }else{
            valorDesconto = valorBruto * 0.06 ;
        }
        printf("passou");
    }else{
        printf("\n\n\nTipo de combustível inválido");
        return 0;
    }
        valorTotal = valorBruto - valorDesconto;

        printf("\n\n\n Valor Total: %2.f\n Valor Desconto: %2.f\n ", valorTotal, valorDesconto);

    return 0;
}
