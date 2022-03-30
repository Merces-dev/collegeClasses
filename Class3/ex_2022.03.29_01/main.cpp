#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
using namespace std;

float incomeCalc(float hours, float salaryPerHour){
    float income;

    if(hours > 50){
        float exceededHours;
        exceededHours = hours - 50;
        income = ((hours - exceededHours) * salaryPerHour) + (exceededHours * 20);
    }else{
        income = hours * salaryPerHour;
    }

    return income;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char c[10];
    float n = 0, income = 0;

    printf("\nDigite o id do seu usuário:\n");
    gets(c);
    printf("\nDigite as horas trabalhadas:\n");
    scanf("%f",&n);

    income = incomeCalc(n, 10);
    printf("O usuário %s tem direito a R$ %.2f \npor suas %.f horas trabalhadas\n", c, income, n);
    return 0;
}
