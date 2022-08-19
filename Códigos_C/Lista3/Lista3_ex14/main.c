#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavra[10]="nao";

    printf("Só acaba com \"Sim\"\n\n");

    for(;strcmp(palavra, "Sim") != 0;){
    printf("Ola tudo bem?\n");
    scanf("%s",palavra);
    }

    return 0;
}


