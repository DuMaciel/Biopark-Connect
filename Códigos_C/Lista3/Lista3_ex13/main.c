#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Soma\n\n");

    int n,soma=0;

    for(int i=1;i>0;i++){
        printf("Digite numero %d da sequência: ",i);
        scanf("%d",&n);

        if(n>=0)
            soma= soma + n;
        else{
            printf("Numero negativo\nSoma Finalizada\n");
            i=n;
    }

    }

    printf("\nA soma é: %d",soma);




    return 0;
}
