#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float peso=0;
    printf("Restaurante Bem-bao\n\n");

    printf("Peso da comida: R$");
    scanf("%f",&peso);

    printf("Valor a pagar: R$%.2f\n",12*peso);
    return 0;
}
