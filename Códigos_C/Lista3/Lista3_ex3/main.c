#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char imp[500];

    printf("Digite seu nome: \n");
    scanf("%s",&imp);

    for(int i=1;i<=10;i++)
        printf("\n%s",imp);
    return 0;
}
