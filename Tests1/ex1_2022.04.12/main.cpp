#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float kgMorango, kgMaca, valorMorango, valorMaca, valorTotal, valorTotalDesconto, kgFrutas, valorKgMaca, valorKgMorango, valorCobrado ;

    printf("Digite quantos Kg de Morango: \n");
    scanf("%f", &kgMorango);

    printf("Digite quantos Kg de Maça: \n");
    scanf("%f", &kgMaca);

    kgFrutas = kgMorango + kgMaca;
    if(kgMaca > 5){
        valorKgMaca = 1.8;
        valorMaca = kgMaca * valorKgMaca;

    }else{
        valorKgMaca = 2.8;
        valorMaca = kgMaca * valorKgMaca;
    }

    if(kgMorango > 5){
        valorKgMorango = 3.2;
        valorMorango = kgMorango * valorKgMorango;
    }else{
        valorKgMorango = 4.5;
        valorMorango = kgMorango * valorKgMorango;
    }

    valorTotal = valorMaca + valorMorango;

    if(kgFrutas > 8 || valorTotal > 25){
        valorTotalDesconto = valorTotal * 0.1;
    }

    valorCobrado = valorTotal - valorTotalDesconto;
    printf("Valor da compra: %0.2f \nValor do desconto: %0.2f \nValor cobrado: %0.2f \nVocê está pagando %0.2f por quilo de Morango e %0.2f por quilo de maça ", valorTotal, valorTotalDesconto, valorCobrado, valorKgMorango, valorKgMaca);

    return 0;
}
