#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int sizes[3];

    for(int i = 0; i < 3; i++){
        printf("\nDigite seu %d° valor\n", i + 1);
        scanf("%d", &sizes[i]);
    };

    if((sizes[0] < sizes[1] + sizes[2]) && (sizes[1] < sizes[0] + sizes[2]) && (sizes[2] < sizes[1] + sizes[3])){
        if(sizes[0] == sizes[1] && sizes[1] == sizes[2]){
            printf("É um triângulo equilátero.\n");
        }else if(sizes[0] != sizes[1] && sizes[1] != sizes[2]){
            printf("É um triângulo escaleno.\n");
        }else{
            printf("É um triângulo isósceles.\n");
        }

    }else{
        printf("\nOs valores informados são incapazes de formar um triângulo.\n");
    };

    printf("\nValores informados:\n");
    for(int i = 0; i < 3; i++){
        printf("\n%d ° valor: %d", i + 1, sizes[i]);
    };
}
