#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salary, adjust, salaryAdjusted;
    char employeeId[10];
    printf("Digite seu id:\n");
    gets(employeeId);
    printf("\nDigite seu salário atual:\nR$");
    scanf("%f", &salary);

    if(salary <= 400){
        adjust = salary * 0.15;
    }
    else if(salary > 400 && salary <= 700){
        adjust = salary * 0.12;
    }
    else if(salary > 700 && salary <= 1000){
        adjust = salary * 0.10;
    }
    else if(salary > 1000 && salary <= 1800){
        adjust = salary * 0.07;
    }
    else if(salary > 1800 && salary <= 2500){
        adjust = salary * 0.04;
    }
    else{
        adjust = salary * 0.00;
    };
    salaryAdjusted = salary + adjust;
    printf("\nFuncionário: %s\nSalário pré-reajuste: R$%.2f\nSalário corrigido: R$%.2f\nValor do reajuste: R$%.2f\n", employeeId, salary, salaryAdjusted, adjust);

}
