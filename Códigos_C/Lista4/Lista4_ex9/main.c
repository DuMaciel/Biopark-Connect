#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Positivos\n\n");

    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    int vD[tam], vP[tam], p=0;

    for(int i=0;i<tam;i++){

        printf("Digite o valor do vetor D na posição %d: ",i+1);
        scanf("%d",&vD[i]);
        if(vD[i]>0){
            vP[p]=vD[i];
            p++;
        }
    }

    //bubble
    for(int j=0;j<p;j++){
        for(int i=0;i<p-1-j;i++){
            if(vP[i]>vP[i+1]){
                vP[i]= vP[i]+vP[i+1];
                vP[i+1]= vP[i]-vP[i+1];
                vP[i]= vP[i]-vP[i+1];
            }
        }
    }
    //bubble



    printf("\nPositivos:");
    for(int i=0;i<p;i++){

        printf(" %d,  ",vP[i]);
    }
    return 0;
}
