#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;
    printf("Possitivo dobra, negativo triplica\n\n");
    printf("Numero: ");
    scanf("%f",&n1);

    if(n1>0)
        printf("O dobro: %.0f",n1*2);
    else
        printf("O triplo: %.0f",n1*3);

    return 0;
}
