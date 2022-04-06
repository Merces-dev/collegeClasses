#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

using namespace std;
using namespace std;
//utilizar os conceitos de troca de valores entre variáveis
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int A,B,C, aux, cresList[3];

    printf("\nDigite seu 1° valor\n");
    scanf("%d", &A);
    printf("\nDigite seu 2° valor\n");
    scanf("%d", &B);
    printf("\nDigite seu 3° valor\n");
    scanf("%d", &C);
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    if(A < B){
        aux = A;
        A = B;
        B = aux;
    };
    if(B < C){
        aux = B;
        B = C;
        C = aux;
    };
    if(C < A){
        aux = C;
        C = A;
        A = aux;
    };

    cresList[0] = A;
    cresList[1] = B;
    cresList[2] = C;

    printf("listaCrescente = [  %d,  %d,  %d];",cresList[0], cresList[1], cresList[2]);

}
