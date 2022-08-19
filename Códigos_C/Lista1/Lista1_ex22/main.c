#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,soma;
    printf("Soma cofrinho\n\n");
    printf("Quantidade de moedas de 1 centavo: ");
    scanf("%f",&m);
    soma=m*0.01;
    printf("Quantidade de moedas de 5 centavos: ");
    scanf("%f",&m);
    soma=m*0.05+soma;
    printf("Quantidade de moedas de 10 centavos: ");
    scanf("%f",&m);
    soma=m*0.10+soma;
    printf("Quantidade de moedas de 25 centavos: ");
    scanf("%f",&m);
    soma=m*0.25+soma;
    printf("Quantidade de moedas de 50 centavos: ");
    scanf("%f",&m);
    soma=m*0.50+soma;
    printf("Quantidade de moedas de 1 real: ");
    scanf("%f",&m);
    soma=m*1.0+soma;
    printf("\nO valor total no cofrinho: R$%.2f",soma);

    return 0;
}
