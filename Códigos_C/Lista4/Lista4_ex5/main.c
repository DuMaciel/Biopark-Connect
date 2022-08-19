#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Matematica com vetor\n\n");

    int tam, soma=0, quant15=0, media=0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    int vA[tam];
    printf("\n");
    tam=0;
    for(int i=0;i<sizeof(vA)/sizeof(vA[0]);i++){

        printf("Digite o valor do vetor A na posição %d: ",i+1);
        scanf("%d",&vA[i]);

        if(vA[i]<15)
            soma= soma + vA[i];
        else if(vA[i]==15)
            quant15++;
        else{
            tam++;
            media= media + vA[i];
        }

    }
        printf("\nA soma dos valores menores que 15: %d\n",soma);
        printf("\nA quantidade de valores iguais a 15: %d\n",quant15);
        printf("\nA media dos valores maiores que 15: %d\n",(media/tam));

    return 0;
}
