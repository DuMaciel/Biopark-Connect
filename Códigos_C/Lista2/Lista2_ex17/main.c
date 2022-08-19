#include <stdio.h>
#include <stdlib.h>

int main()
{
    int novo;
    do{
    novo=1;
    int item=0, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;

    printf("------------------MENU------------------");
    printf("\n 1 - Cachorro Quente - R$11,00");
    printf("\n 2 - Cheeseburger    - R$10,00");
    printf("\n 3 - Hamburger       - R$09,00");
    printf("\n 4 - Bauru           - R$08,50");
    printf("\n 5 - Misto Quente    - R$08,00");
    printf("\n 6 - Refrigerante    - R$04,50");
    printf("\n 7 - Fechar Pedido\n\n");
    do{
    printf("Digite o codigo do item: ");
    scanf("%d",&item);
    switch(item){
        case 1:
            n1++;
            break;
        case 2:
            n2++;
            break;
        case 3:
            n3++;
            break;
        case 4:
            n4++;
            break;
        case 5:
            n5++;
            break;
        case 6:
            n6++;
            break;
        case 7:
            printf("Pedido Fechado");
            break;
        default:
            printf("Item invalido\n");
            break;
    }
    }while(item!=7);
    printf("\n\n %d X Cachorro Quente[R$11,00] = R$%.2f",n1,n1*11.0);
    printf("\n %d X Cheeseburger   [R$10,00] = R$%.2f",n2,n2*10.0);
    printf("\n %d X Hamburger      [R$09,00] = R$%.2f",n3,n3*9.0);
    printf("\n %d X Bauru          [R$08,50] = R$%.2f",n4,n4*8.5);
    printf("\n %d X Misto Quente   [R$08,00] = R$%.2f",n5,n5*8.0);
    printf("\n %d X Refrigerante   [R$04,50] = R$%.2f",n6,n6*4.5);
    printf("\nValor total do pedido = %.2f",n1*11.0+n2*10.0+n3*9.0+n4*8.5+n5*8.0+n6*4.5);
    printf("\n----------------------------------------\n");

    printf("Digite zero para fazer um novo pedido: ");
    scanf("%d",&novo);
    printf("\n\n\n");
    }while(novo==0);
    return 0;
}
