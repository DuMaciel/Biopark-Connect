#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Soma de vetores\n");
    int v1[10],v2[10],vt[10];

    for(int i=0;i<sizeof(v1)/sizeof(v1[0]);i++){
        printf("\nDigite o valor do vetor 1 na posição %d: ",i+1);
        scanf("%d",&v1[i]);
        printf("Digite o valor do vetor 2 na posição %d: ",i+1);
        scanf("%d",&v2[i]);
        vt[i]=v1[i] + v2[i];
    }
    for(int i=0;i<sizeof(vt)/sizeof(vt[0]);i++){
        printf("\nsoma posição %d: %d",i+1,vt[i]);
    }
    return 0;
}
