#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Matematica com vetor\n\n");

    int tam, smaller, larger, sP, lP;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    int vA[tam];
    printf("\n");
    tam=0;
    for(int i=0;i<sizeof(vA)/sizeof(vA[0]);i++){

        printf("Digite o valor do vetor A na posição %d: ",i+1);
        scanf("%d",&vA[i]);

        if(i==0){
            smaller=vA[i];
            larger=vA[i];
        }
        if(vA[i]<=smaller){
            smaller=vA[i];
            sP=i+1;
        }
        if(vA[i]>=larger){
            larger=vA[i];
            lP=i+1;
        }



    }
        printf("\nO maior valor: %d\nPosição do maior: %d",larger,lP);
        printf("\n\nO menor valor: %d\nPosição do menor: %d",smaller,sP);


    return 0;
}
