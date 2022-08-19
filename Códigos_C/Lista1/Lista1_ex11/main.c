#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float dias=0;
    printf("Tempo sem Acidentes\n\n");
    printf("Dias: ");
    scanf("%f",&dias);

    printf("Meses: %.2f\n",dias/30);
    printf("Anos: %.2f\n",dias/365);

    return 0;
}
