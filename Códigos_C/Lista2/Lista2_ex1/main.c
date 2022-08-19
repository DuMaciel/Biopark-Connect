#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;
    printf("O maior\n\n");
    printf("Primeiro numero: ");
    scanf("%f",&n1);
    printf("Segundo numero: ");
    scanf("%f",&n2);
    if(n1<n2)
        printf("O maior: %.0f",n2);
    else if(n2<n1)
        printf("O maior: %.0f",n1);
    else
        printf("Numeros iguais");

    return 0;
}
