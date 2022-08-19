#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lata,garrafinha,garrafa;
    printf("Meia-Cola\n\n");
    printf("Digite a quantidade de latas de 350ml: ");
    scanf("%d",&lata);
    printf("Digite a quantidade de garrafas de 600ml: ");
    scanf("%d",&garrafinha);
    printf("Digite a quantidade de garrafas de 2litros: ");
    scanf("%d",&garrafa);

    printf("A quantidade de refrigerante comprado: %.2f Litros",lata*0.350+garrafinha*0.6+garrafa*2.0);
    return 0;
}
