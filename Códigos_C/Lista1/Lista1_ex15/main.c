#include <stdio.h>
#include <stdlib.h>

int main()
{
    float conta;
    printf("Divisao de conta\n\n");
    printf("Valor da conta: R$");
    scanf("%f",&conta);

    printf("\nCarlos paga: R$%.2f",((int)(conta/3))*1.00);
    printf("\nAndre paga: R$%.2f",((int)(conta/3))*1.00);
    printf("\nAndre paga: R$%.2f",conta-(((int)(conta/3))*1.00)*2);

    return 0;
}
