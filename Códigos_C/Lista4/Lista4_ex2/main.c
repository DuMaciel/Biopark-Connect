#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Matematica vetores\n\n");
    int v[5];
    int pares=0, impares=0, maior50=0, menor7=0;

    for(int i=0;i<sizeof(v)/sizeof(v[0]);i++){
        printf("\nDigite o valor do vetor na posição %d: ",i+1);
        scanf("%d",&v[i]);

        if(v[i]%2==0)
            pares++;
        else
            impares++;

        if(v[i]>50)
            maior50++;
        else if(v[i]<7)
            menor7++;

    }
    printf("\nTotal de pares: %d",pares);
    printf("\nTotal de impares: %d",impares);
    printf("\nTotal menor que 7: %d",menor7);
    printf("\nTotal maior que 50: %d",maior50);
    return 0;
}

