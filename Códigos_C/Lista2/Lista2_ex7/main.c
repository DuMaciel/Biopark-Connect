#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s;
    float alt;
    printf("Peso Ideal\n\n");
    printf("Digite o sexo[H,M]: ");
    scanf("%c",&s);
    printf("Digite a altura: ");
    scanf("%f",&alt);

    if(s=='H' || s=='h')
        printf("O peso ideal: %.2fKG",72.7*alt-58);
    if(s=='M' || s=='m')
        printf("O peso ideal: %.2fKG",62.1*alt-44.7);
    }

