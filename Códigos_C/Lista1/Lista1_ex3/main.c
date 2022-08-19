#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pao=0,broa=0;
    printf("Padaria Hotpao\n\n");
    printf("Paes vendidos: ");
    scanf("%f",&pao);

    printf("Broas vendidas: ");
    scanf("%f",&broa);

    printf("Valor total: %.2f\n",pao*0.12+broa*1.5);
    printf("Valor para poupanca: %.2f\n",(pao*0.12+broa*1.5)*0.1);
    return 0;
}
