#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rei;
    float saldo;
    do{
    rei=1;
    printf("------------CALCULADORA DE CREDITO------------\n\n");
    printf("Digite o saldo medio: R$");
    scanf("%f",&saldo);

    if(saldo>=0 && saldo<=200){
        printf("\nO saldo medio: R$%.2f",saldo);
        printf("\nO valor de credito: R$%.2f",saldo*0);
    }else if(saldo>200 && saldo<=400){
        printf("\nO saldo medio: R$%.2f",saldo);
        printf("\nO valor de credito: R$%.2f",saldo*0.2);
    }else if(saldo>400 && saldo<=600){
        printf("\nO saldo medio: R$%.2f",saldo);
        printf("\nO valor de credito: R$%.2f",saldo*0.3);
    }else if(saldo>600){
        printf("\nO saldo medio: R$%.2f",saldo);
        printf("\nO valor de credito: R$%.2f",saldo*0.4);
    }

    printf("\nDigite zero para reiniciar: ");

    scanf("%d",&rei);
    printf("\n\n");
    }while(rei==0);
    return 0;
}
