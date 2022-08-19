#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco,desc;
    printf("Preco com desconto\n");
    printf("Preco do produto: R$");
    scanf("%f",&preco);
    printf("Desconto(%): ");
    scanf("%f",&desc);

    printf("O preco com %.0f%% de desconto: R$%.2f",desc,preco*(1-desc/100));
    return 0;
}
