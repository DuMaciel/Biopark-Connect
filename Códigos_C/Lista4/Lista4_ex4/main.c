#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Multiplicação de vetor\n\n");

    int tam;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d",&tam);
    int vA[tam], vB[tam], vC[tam];
    printf("\n");

    for(int i=0;i<sizeof(vA)/sizeof(vA[0]);i++){
        printf("Digite o valor do vetor A na posição %d: ",i+1);
        scanf("%d",&vA[i]);
        printf("Digite o valor do vetor B na posição %d: ",i+1);
        scanf("%d",&vB[i]);

        vC[i]= vA[i] + vB[i];
    }
        printf("\nResultado soma A e B");
    for(int i=0;i<sizeof(vC)/sizeof(vC[0]);i++){
        printf("\nVetor C posição %d: %d",i+1,vC[i]);
    }


    return 0;
}
