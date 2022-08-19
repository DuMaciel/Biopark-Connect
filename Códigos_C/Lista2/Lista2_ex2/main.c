#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Par ou impar\n\n");
    printf("Numero: ");
    scanf("%d",&n);

    if(n%2==0)
        printf("O numero e par.");
    else
        printf("O numero e impar.");



    return 0;
}
