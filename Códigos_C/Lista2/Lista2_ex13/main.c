#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("------------------------Contando Notas------------------------\n\n");
    printf("Digite o valor: R$");
    scanf("%d",&valor);

    printf("Para o valor R$%d e necessario a seguinte quantidade de notas:",valor);
    if(valor/100 >= 1)
        printf("\nNotas de 100: %d",valor/100);
    valor=valor-(valor/100)*100;
    if(valor/50 >= 1)
        printf("\nNotas de 50: %d",valor/50);
    valor=valor-(valor/50)*50;
    if(valor/10 >= 1)
        printf("\nNotas de 10: %d",valor/10);
    valor=valor-(valor/10)*10;
    if(valor/5 >= 1)
        printf("\nNotas de 5: %d",valor/5);
    valor=valor-(valor/5)*5;
    if(valor >= 1)
        printf("\nNotas de 1: %d",valor);

    return 0;
}
