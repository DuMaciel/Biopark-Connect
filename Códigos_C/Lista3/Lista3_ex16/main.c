#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int item;
    float preco, total=0;

    do{

    printf("----------------Caixa----------------\n\"0\"Em quantidade para fechar compra!\n");

    for(int i=1;i>0;i++){
    printf("\nDigite a quantidade do item %d: ",i);
    scanf("%d",&item);

    if(item<=0){
        printf("Compra fechada.");
        break;
    }

    printf("Digite o preço do item %d: R$",i);
    scanf("%f",&preco);
        total= total + preco*item;
    }
    printf("\nO total gasto: R$%.2f",total);
    printf("\nDigite \"0\" para uma nova compra: ");
    scanf("%f",&total);
    printf("\n\n");
    }while(total==0);
    return 0;
}
