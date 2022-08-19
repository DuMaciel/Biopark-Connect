#include <stdio.h>
#include <stdlib.h>

int main()
{
    int blusa;
    float novelo;
    printf("Controle de materia prima\n\n");
    printf("Quantidade de bluzas feitas no dia: ");
    scanf("%d",&blusa);
    printf("Quantidade de novelos gastos no dia: ");
    scanf("%f",&novelo);

    printf("Esta sendo gasto %.2f novelos por blusa",novelo/blusa);


    return 0;
}
