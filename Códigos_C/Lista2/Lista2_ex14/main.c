#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    float valor;
    printf("Imposto\n\n");
    printf("Digite o ano do veiculo: ");
    scanf("%d",&ano);
    printf("Digite o valor do veiculo: R$");
    scanf("%f",&valor);

    if(ano<1990)
        printf("\nO valor de imposto a pagar: R$%.2f",valor*0.01);
    else
        printf("\nO valor de imposto a pagar: R$%.2f",valor*0.015);
    return 0;
}
