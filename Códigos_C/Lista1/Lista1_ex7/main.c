#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float dia=0,mes=0;
    printf("Dia do Ano\n\n");

    printf("Dia:");
    scanf("%f",&dia);
    printf("Mes:");
    scanf("%f",&mes);

    printf("Hoje é dia %.0f do ano.\n",dia+(mes*30));
    return 0;
}
