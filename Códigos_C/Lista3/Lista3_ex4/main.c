#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char imp[500];
    int n;
    printf("Digite seu nome: \n");
    scanf("%s",&imp);
    printf("Quantidade de vezes: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
        printf("\n%s",imp);
    return 0;
}
