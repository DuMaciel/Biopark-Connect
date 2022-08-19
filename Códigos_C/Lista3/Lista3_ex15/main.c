#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Calculadora de Fatorial\n\n");

    int acum=1, n;
    printf("Digite o numero: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        acum = acum * i;
    printf("O resultado: %d",acum);
    return 0;
}
