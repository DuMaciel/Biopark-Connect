#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rep=1;
    do{
    float preco;
    int cond;
    printf("\nDesconto por condicao\n\n");
    printf("Digite o valor do produto: R$");
    scanf("%f",&preco);
    printf("\n1 - A vista em dinheiro ou cheque(-10%%)");
    printf("\n2 - A vista no cartao de credito(-15%%)");
    printf("\n3 - Em duas vezes sem juros(0%%)");
    printf("\n4 - Em duas vezes com juros(+10%%)");
    printf("\nDigite a condicao desejada: ");
    scanf("%d",&cond);
    switch(cond){
        case 1:
            printf("\nO preco que deve ser cobrado: R$%.2f",preco*0.9);
            break;
        case 2:
            printf("\nO preco que deve ser cobrado: R$%.2f",preco*0.85);
            break;
        case 3:
            printf("\nO preco que deve ser cobrado: R$%.2f",preco);
            break;
        case 4:
            printf("\nO preco que deve ser cobrado: R$%.2f",preco*1.1);
            break;
        default:
            printf("\nCondicao invalida");
    }
    printf("\nDigite zero para reiniciar o programa: ");
    scanf("%d",&rep);
    }while(rep==0);
    return 0;

}
