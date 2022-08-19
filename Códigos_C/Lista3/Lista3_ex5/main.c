#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float x[10];
    float soma=0;

    for(int i=0;i<10;i++){
    printf("Digite o numero %d: ",i+1);
    scanf("%f",&x[i]);
    soma=soma+x[i];
    }
    printf("A soma é: %.0f",soma);
    return 0;
}
