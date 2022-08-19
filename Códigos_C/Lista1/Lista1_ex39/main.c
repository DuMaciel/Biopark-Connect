#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c1,c2,sal,multa;
    printf("O que sobra\n\n");
    printf("Digite o salario: R$");
    scanf("%f",&sal);
    printf("Valor da conta 1: R$");
    scanf("%f",&c1);
    printf("Valor da conta 2: R$");
    scanf("%f",&c2);
    printf("Percentual de multa nas contas(%%): ");
    scanf("%f",&multa);

    printf("Sobra: R$%.2f",sal-(c1+c2)*(1+multa/100));
    return 0;
}
