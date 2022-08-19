#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("O Maior\n\n");
    int n1,n2;
    printf("Primeira numero: ");
    scanf("%d",&n1);
    printf("segunda numero: ");
    scanf("%d",&n2);

    if(n1>n2)
        printf("A diferenca do maior pelo menor: %d",n1/n2);
    else
        printf("A diferenca do maior pelo menor: %d",n2/n1);
    return 0;
}
