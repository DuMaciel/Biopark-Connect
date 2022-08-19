#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float x[20];
    float soma=0;
    int i;
    for(i=0;i<20;i++){
    printf("Idade %d: ",i+1);
    scanf("%f",&x[i]);
    soma=soma+x[i];
    }

    printf("A media: %.2f",soma/i);
    return 0;
}
