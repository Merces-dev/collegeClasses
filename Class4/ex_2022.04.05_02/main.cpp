#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valueQI;
    char* message;
    printf("Digite seu QI\n");
    scanf("%d", &valueQI);
    if(valueQI >= 0 && valueQI <= 150){
        if(valueQI >= 0 && valueQI <= 30 ){
            message = "ameba";
        }
        else if(valueQI > 30 && valueQI <= 50 ){
            message = "débil mental";
        }
        else if(valueQI > 50 && valueQI <= 70 ){
            message = "regular";
        }
        else if(valueQI > 70 && valueQI <= 100 ){
            message = "normal";
        }
        else{
            message = "gênio";
        };
        printf("Você é considerado %s", message);

    }else{
        printf("Valor de QI inválido!");
    };

}
