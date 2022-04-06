#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salary, adjust, salaryAdjusted;

    printf("Digite seu salário atual:\nR$");
    scanf("%f", &salary);

    if(salary <= 500){
        adjust = salary * 0.15;
    }
    else if(salary > 500 && salary <= 1000){
        adjust = salary * 0.10;
    }
    else{
        adjust = salary * 0.05;
    };
    salaryAdjusted = salary + adjust;
    printf("\nSalário pré-reajuste: R$%.2f\nSalário pós-reajuste: R$%.2f\nValor do reajuste: R$%.2f\n", salary, salaryAdjusted, adjust);

}
