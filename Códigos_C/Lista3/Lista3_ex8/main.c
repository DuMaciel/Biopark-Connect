#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1,n2=10000;
    char nome1[30], nome2[30];

    printf("Quem é mais novo\n\n");

    for(int i=1;i<=10;i++){
    printf("Digite o nome %d: ",i);
    scanf("%s",nome1);
    printf("Idade de %s: ",nome1);
    scanf("%d",&n1);

    if(n1<n2){
        strcpy(nome2,nome1);
        n2= n1;
    }


    }

    printf("A pessoa mais nova é %s",nome2);
    return 0;
}
