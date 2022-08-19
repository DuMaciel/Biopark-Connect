#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("---------Menor e maior altura---------\n\n");

    float altura, menor=10, maior=0;

    for(int i=1;i<=3;i++){
    printf("Altura pessoa %d[m]: ",i);
    scanf("%f",&altura);
    if(menor>altura)
        menor= altura;
    if(maior<altura)
        maior= altura;
    }

    printf("A menor altura: %.2fm\nA maior altura: %.2fm\n",menor,maior);
    return 0;
}
