#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Pessoas maiores de idade\n\n\n");
    int i,n,maiores=0;

    for(i=1;i<=20;i++){
    printf("Idade pessoa %d: ",i);
    scanf("%d",&n);
    if(n>=18)
        maiores++;
    }

    printf("O total de pessoas maiores de idade: %d",maiores);
    return 0;
}
