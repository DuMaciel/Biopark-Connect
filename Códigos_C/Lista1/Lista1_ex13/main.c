#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    int numaux=0;

    printf("Calculadora de centenas, dezenas e unidades\nNumeros de 3 digitos\n\n");
    printf("Incira um numero: ");
    scanf("%f",&num);

    numaux= num/100;
    printf("Centenas: %d\n",numaux);

    num= num-numaux*100;
    numaux= num/10;
    printf("Dezenas: %d\n",numaux);

    num= num-numaux*10;
    numaux= num;
    printf("Unidades: %d\n",numaux);
    return 0;
}
