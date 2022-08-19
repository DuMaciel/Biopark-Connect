#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float bebida, peso, total=0;

    do{

    printf("--------------Restaurante--------------\n\"0\"Em peso e bebida para o pedido!\n");

    for(int i=1;i>0;i++){
    printf("\nDigite o peso do prato %d[KG]: ",i);
    scanf("%f",&peso);

    printf("Digite o valor gasto com bebida: R$",i);
    scanf("%f",&bebida);
        total= total + (bebida + peso*23.59);
    if(peso==0 && bebida==0){
        printf("\nPedido fechado.");
        break;
    }
    }
    printf("\nO total gasto: R$%.2f",total);
    printf("\nDigite \"0\" para uma nova compra: ");
    scanf("%f",&total);
    printf("\n\n");
    }while(total==0);
    return 0;
}
