#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano,anoN;
    printf("Tempo de vida\n\n");
    printf("Digite o ano de nascimento: ");
    scanf("%d",&anoN);
    printf("Digite o ano atual: ");
    scanf("%d",&ano);
    printf("\nTempo em anos: %d",ano-anoN);
    printf("\nTempo em meses: %d",(ano-anoN)*365/30);
    printf("\nTempo em semanas: %d",(ano-anoN)*365/7);
    printf("\nTempo em dias: %d",(ano-anoN)*365);
    return 0;
}
