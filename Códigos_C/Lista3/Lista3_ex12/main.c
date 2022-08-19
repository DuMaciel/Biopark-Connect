#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Classificando numeros\n\n");

    int n,total1=0,total2=0,total3=0;

    for(int i=1;i<=20;i++){
        printf("Digite numero %d da sequência: ",i);
        scanf("%d",&n);

        if(n>=0 && n<=100)
            total1++;
        else if(n>100 && n<=200)
            total2++;
        else if(n>200)
            total3++;
        else{
            printf("Numero negativo\n\nDigite numeros positivos!\n");
            i--;
    }

    }
    printf("\nQuantidade de numeros entre 0 e 100: %d",total1);
    printf("\nQuantidade de numeros entre 101 e 200: %d",total2);
    printf("\nQuantidade de numeros maiores que 200: %d",total3);




    return 0;
}
