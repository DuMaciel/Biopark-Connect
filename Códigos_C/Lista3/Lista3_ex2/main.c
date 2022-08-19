#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1,n2,soma;

    printf("Exercicío 2\n-----------SOMATORIO------------\n");
    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);

    if(n1<n2){
        for(n1;n1<=n2;n1++)
            soma = soma + n1;
    }
        printf("O somatorio é: %d",soma);
    return 0;
}
