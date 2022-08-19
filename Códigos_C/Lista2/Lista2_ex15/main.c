#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod,rei;
    float sal;
    do{
    rei=1;
    printf("------------CALCULADORA DE AUMENTO------------\n\n");
    printf("Digite o salario atual: R$");
    scanf("%f",&sal);
    printf("Digite o codigo do cargo: ");
    scanf("%d",&cod);
    switch(cod){
    case 101:
        printf("\nCargo de Gerente selecionado.");
        printf("\nO salario antigo: R$%.2f",sal);
        printf("\nO salario novo: R$%.2f",sal*1.1);
        printf("\nO aumento foi: R$%.2f",sal*0.1);
        break;
    case 102:
        printf("\nCargo de Engenheiro selecionado.");
        printf("\nO salario antigo: R$%.2f",sal);
        printf("\nO salario novo: R$%.2f",sal*1.2);
        printf("\nO aumento foi: R$%.2f",sal*0.2);
        break;
    case 103:
        printf("\nCargo de Tecnico selecionado.");
        printf("\nO salario antigo: R$%.2f",sal);
        printf("\nO salario novo: R$%.2f",sal*1.3);
        printf("\nO aumento foi: R$%.2f",sal*0.3);
        break;
    default:
        printf("\nCargos gerais selecionado.");
        printf("\nO salario antigo: R$%.2f",sal);
        printf("\nO salario novo: R$%.2f",sal*1.4);
        printf("\nO aumento foi: R$%.2f",sal*0.4);
        break;
    }
    printf("\nDigite zero para reiniciar: ");
    scanf("%d",&rei);
    printf("\n\n");
    }while(rei==0);
    return 0;
}
