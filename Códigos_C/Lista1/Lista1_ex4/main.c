#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    char nome[50];
    float idade=0;
    printf("Tempo de Vida\n\n");
    printf("Nome: ");
    scanf("%s",nome);

    printf("Idade: ");
    scanf("%f",&idade);

    printf("\n\nNome: %s\n",nome);
    printf("Meses vividos: %.0f\n",idade*365/30);
    printf("Dias vividos: %.0f\n",idade*365);
    printf("Horas vividas: %.0f\n",idade*365*24);
    printf("Minutos vividos: %.0f\n",idade*365*24*60);
    return 0;
}
