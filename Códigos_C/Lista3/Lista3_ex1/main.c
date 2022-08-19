#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char imp[500];

    printf("Digite a mensagem para impresão: \n");
    scanf("%s",&imp);

    for(int i=1;i<=20;i++)
        printf("\n%s %d",imp,i);
    return 0;
}
