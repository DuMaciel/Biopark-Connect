#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f=0,l=0;
    printf("Area de Terreno\n\n");
    printf("Medida da frente: ");
    scanf("%f",&f);
    printf("Medida da lateral: ");
    scanf("%f",&l);
    printf("A area do terreno: %.2f",f*l);
    return 0;
}
