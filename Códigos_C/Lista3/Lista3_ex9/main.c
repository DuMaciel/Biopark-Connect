#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Maiores que 8\n\n");

    int n,soma;

    for(int i=1;i<=20;i++){
        printf("Digite numero %d da sequência: ",i);
        scanf("%d",&n);

        if(n>8)
            soma++;
    }
    printf("Numeros maiore que 8: %d",soma);




    return 0;
}
