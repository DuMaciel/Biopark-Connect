#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float diametro,altura;
    printf("Volume de caixa d'agua\n\n");
    printf("Diametro da caixa(m): ");
    scanf("%f",&diametro);
    printf("Altura da caixa(m): ");
    scanf("%f",&altura);

    printf("O volume da caixa: %.2f m3",pow(diametro/2,2)*M_PI*altura);

    return 0;
}
