#include <stdio.h>
#include <stdlib.h>

int main()
{
    float refre;
    printf("Calculadora de ingredientes\n\n");
    printf("Quantos litros de refresco deve ser feito: ");
    scanf("%f",&refre);
    printf("Quantidade de agua: %.2f Litros\nQuantidade de suco: %.2f Litros",refre*0.8,refre*0.2);
    return 0;
}
