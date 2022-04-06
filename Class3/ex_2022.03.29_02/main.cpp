#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float notas[4], quad[4];

    for(int i = 1; i < 5; i++){
        printf("\nDigite sua %i° nota\n", i);
        scanf("%f", &notas[i]);
        quad[i] = notas[i] * notas[i];

        if( i == 3 && quad[3] > 1000){
            break;
        }
    };

    //Caso a terceiro (0, 1, 2, 4) seja maior que 1000 o mesmo deve ser interrompido e o código deve parar;
    if(quad[3] > 1000){
        printf("%.2f ² = %.2f", notas[3], quad[3]);
    }else{
        for(int i = 1; i < 5; i++){
        	printf("\n%.2f ² = %.2f", notas[i], quad[i]);
        }
    };


    return 0;
}
