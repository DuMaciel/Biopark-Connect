#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal,salm;

    printf("Salario em salarios minimos\n");
    printf("Digite o valor do salario minimo: R$");
    scanf("%f",&salm);
    printf("Digite o valor do salario: R$");
    scanf("%f",&sal);

    printf("O salario coresponde a: %.2f salarios minimos",sal/salm);

    return 0;
}
