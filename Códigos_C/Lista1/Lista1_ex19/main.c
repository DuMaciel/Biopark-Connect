#include <stdio.h>
#include <stdlib.h>

int main()
{
    int frango;
    printf("Granja Frangotech\n\n");
    printf("Digite a quantidade de frangos: ");
    scanf("%d",&frango);

    printf("O total de chips %d\nO total de anel de alimentacao %d\nO gasto total: R$%.2f",frango,frango*2,(float)(frango*7.0+frango*4.0));

    return 0;
}
