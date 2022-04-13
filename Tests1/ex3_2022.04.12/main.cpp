#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int h1, h2, m1, m2, hMaisVelho, hMaisNovo, mMaisVelha, mMaisNova, soma, prod;

    printf("\nDigite a idade do primeiro homem:\n");
    scanf("%d", &h1);
    printf("\nDigite a idade do segundo homem:\n");
    scanf("%d", &h2);
    printf("\nDigite a idade da primeira mulher:\n");
    scanf("%d", &m1);
    printf("\nDigite a idade da segunda mulher:\n");
    scanf("%d", &m2);

    if(h1 > h2){
        hMaisVelho = h1;
        hMaisNovo = h2;
    }else{
        hMaisVelho = h2;
        hMaisNovo = h1;
    }

    if(m1 > m2){
        mMaisVelha = m1;
        mMaisNova = m2;
    }else{
        mMaisVelha = m2;
        mMaisNova = m1;
    }

    soma = hMaisVelho + mMaisNova;
    prod = hMaisNovo * mMaisVelha;

    printf("\nSoma: %d\nProduto: %d\nMais velho: %d\nMais velha: %d", soma, prod, hMaisVelho, mMaisVelha);


}
