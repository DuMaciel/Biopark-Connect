#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Numeros pares\n\n");

    int n,pares;

    for(int i=1;i<=20;i++){
        printf("Digite numero %d da sequência: ",i);
        scanf("%d",&n);

        if(n%2==0)
            pares++;
    }
    printf("quantidade de numeros pares: %d",pares);




    return 0;
}
