#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nivel,qtaula;
    printf("Calculadora de salario\n\n");
    printf("Qual o nivel do professor: ");
    scanf("%d",&nivel);
    printf("Quantas aulas foram trabalhadas: ");
    scanf("%d",&qtaula);
    switch(nivel){
    case 1:
        printf("O salario total: R$%.2f",12.00*qtaula*4.5);
        break;
    case 2:
        printf("O salario total: R$%.2f",17.00*qtaula*4.5);
        break;
    case 3:
        printf("O salario total: R$%.2f",24.00*qtaula*4.5);
        break;
    }
    return 0;
}
