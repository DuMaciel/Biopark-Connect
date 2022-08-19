#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float p=0,m=0,g=0;
    printf("Pedido\n\n");

    printf("Camisas P:");
    scanf("%f",&p);
    printf("Camisas M:");
    scanf("%f",&m);
    printf("Camisas G:");
    scanf("%f",&g);
    printf("O Valor do pedido: R$%.2f",(p*10+m*12+g*15));
    return 0;
}
