#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio;
    printf("Area de pizza\n\n");
    printf("Raio da pizza(cm): ");
    scanf("%f",&raio);

    raio= pow(raio,2)*M_PI;
    printf("\nA area de pizza: %.2f cm2",raio);
}
