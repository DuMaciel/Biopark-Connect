#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Multiplica��o de vetor\n\n");

    int mult;
    printf("Digite o tamanho dos vetor A: ");
    scanf("%d",&mult);
    int vA[mult], vB[mult];
    printf("Digite o multiplicador: ");
    scanf("%d",&mult);
    printf("\n");


    for(int i=0;i<sizeof(vA)/sizeof(vA[0]);i++){
        printf("Digite o valor do vetor A na posi��o %d: ",i+1);
        scanf("%d",&vA[i]);


        vB[i]= vA[i]*mult;
    }

    for(int i=0;i<sizeof(vB)/sizeof(vB[0]);i++){
        printf("\nVetor B posi��o %d: %d",i+1,vB[i]);
    }


    return 0;
}
