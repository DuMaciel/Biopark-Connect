#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Calculadora Par e Impar\n\n");
    printf("Numero: ");
    scanf("%d",&n);

    if(n%2==0)
        printf("Resultado: %d",n+5);
    else
        printf("Resultado: %d",n+8);

    return 0;
}
