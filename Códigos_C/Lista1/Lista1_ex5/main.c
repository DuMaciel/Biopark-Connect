#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco=0,pago=0;
    printf("Posto\n\n");

    printf("Valor da Gasolina: R$");
    scanf("%f",&preco);
    printf("Valor pago: R$");
    scanf("%f",&pago);

    printf("Quantidade abastecida: %.2f litros",pago/preco);

    return 0;
}
