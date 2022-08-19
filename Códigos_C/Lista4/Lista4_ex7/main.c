#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Comparador\n\n");

    int vR[5], vS[10], vX[10];

    for(int i=0;i<10;i++)
        vX[i]=-147258963;

    for(int i=0;i<5;i++){

        printf("Digite o valor do vetor R na posição %d: ",i+1);
        scanf("%d",&vR[i]);
    }
    printf("\n");

    //comparando os valores
    for(int i=0;i<10;i++){

        printf("Digite o valor do vetor S na posição %d: ",i+1);
        scanf("%d",&vS[i]);

        for(int j=0;j<5;j++){
            if(vS[i]==vR[j])
                    vX[i]=vS[i];
        }

    }
     //comparando os valores

    //bubble
    for(int i=0;i<10;i++){
        for(int j=0;j<9-i;j++){
            if(vX[j]>vX[j+1]){
                vX[j]= vX[j]+vX[j+1];
                vX[j+1]= vX[j]-vX[j+1];
                vX[j]= vX[j]-vX[j+1];
            }
        }
    }
    //buble

    //retirando repetidos
    for(int i=0;i<10;i++){
        if(vX[i]==vX[i+1])
            vX[i]=-147258963;
    }
    //retirando repetidos


    for(int i=0;i<10;i++){
        if(vX[i]!=-147258963)
        printf("\nvalor repetido: %d",vX[i]);
    }
    return 0;
}
