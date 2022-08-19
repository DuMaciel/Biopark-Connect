#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Numeros entre 0 e 100.\n\n");

    int n,total;

    for(int i=1;i<=20;i++){
        printf("Digite numero %d da sequência: ",i);
        scanf("%d",&n);

        if(n>0 && n<100)
            total++;
    }
    printf("quantidade de numeros entre 0 e 100: %d",total);




    return 0;
}
