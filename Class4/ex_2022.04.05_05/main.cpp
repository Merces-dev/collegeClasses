#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salaryPerHour, workedHours, salaryGross, salaryFamily;
    int children;
    printf("Digite seu salário/hora atual:\nR$");
    scanf("%f", &salaryPerHour);
    printf("Digite quantas horas trabalhadas tem:\n");
    scanf("%f", &workedHours);
    printf("Quantidade de filhos com menos de 14 anos:\n");
    scanf("%d", &children);

    salaryGross = salaryPerHour * workedHours;

    if(salaryGross <= 500){
        salaryFamily = children * 10.5;
    }
    else if(salaryPerHour > 500 && salaryPerHour <= 1000){
        salaryFamily = children * 6.5;
    }
    else{
        salaryFamily = children * 1.5;
    };
    printf("\nSalário bruto: R$%.2f\nSalário família: R$%.2f", salaryGross, salaryFamily);

}
