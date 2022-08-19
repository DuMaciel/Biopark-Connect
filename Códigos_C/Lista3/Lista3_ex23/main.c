#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("--------------------Pesquisa--------------------\n\n");

    int casa, quant, canal, canal3=0, canal5=0, canal8=0, canal11=0, canal13=0;
    float total=0.0;
    printf("Digite a quantidade de casas participantes: ");
    scanf("%d",&casa);

    for(int i=1;i<=casa;i++){
        printf("Canal na casa %d: ",i);
        scanf("%d",&canal);
        printf("Quantidade de pessoas assistindo: ");
        scanf("%d",&quant);
        printf("\n");
        if(canal==3)
            canal3= canal3 + quant;
        else if(canal==5)
            canal5= canal5 + quant;
        else if(canal==8)
            canal8= canal8 + quant;
        else if(canal==11)
            canal11= canal11 + quant;
        else if(canal==13)
            canal13= canal13 + quant;
        else{
            printf("Canal invalido.\n");
            i--;
    }
    }
    total= canal3 + canal5 + canal8 + canal11 + canal13;
    printf("\nPercentual de audiencia");
    printf("\nCanal 3: %.2f%%\nCanal 5: %.2f%%\nCanal 8: %.2f%%\nCanal 11: %.2f%%\nCanal 13: %.2f%%\n",
           canal3/total*100,canal5/total*100,canal8/total*100,canal11/total*100,canal13/total*100);
    return 0;
}
