#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, aumento;
    printf("Calculadora de Aumento\n\n");

    printf("Digite o salario inicial: R$");
    scanf("%f",&salario);
    printf("Digite o percentual do aumento(%%): ");
    scanf("%f",&aumento);

    printf("\n\nO salario inicial: R$%.2f",salario);
    printf("\nO salario com aumento: R$%.2f",salario*(aumento/100+1));
    printf("\nO salario com desconto de imposto(8%%): R$%.2f",(salario*(aumento/100+1))*0.92);
    return 0;
}
