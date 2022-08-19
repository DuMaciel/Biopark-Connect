#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Ordenador\n\n");
    int tam, aux, sc;
    printf("Tamanho do vetor: ");
    scanf("%d",&tam);
    sc= tam-1;

    int v[tam];

    for(int i=0;i<tam;i++){
        printf("Valor na posição %d: ",i+1);
        scanf("%d",&v[i]);
    }

    for(int j=0;j<tam;j++){
        for(int i=0;i<sc;i++){
            if(v[i]>v[i+1]){
                aux= v[i+1];
                v[i+1]= v[i];
                v[i]= aux;
            }

        }
    sc--;
    }
    printf("\n");
    for(int i=0;i<tam;i++){
        printf("%d  ", v[i]);
    }
    return 0;
}
