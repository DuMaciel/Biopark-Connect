#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;
    printf("Calcular\n\n");
    printf("Primeiro numero: ");
    scanf("%f",&n1);
    printf("Segundo numero: ");
    scanf("%f",&n2);
    if(n1==n2)
        printf("A soma: %.0f",n1+n2);
    else
        printf("A multiplicacao: %.0f",n1*n2);

    return 0;
}
