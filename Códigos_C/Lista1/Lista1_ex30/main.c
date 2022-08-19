#include <stdio.h>
#include <stdlib.h>

main(){
    float sal, ven;
    printf("Calculadora de salario\n\n");
    printf("Salario base: R$");
    scanf("%f",&sal);
    printf("Total de vendas: R$");
    scanf("%f",&ven);

    printf("O valor de comissao: R$%.2f\nO salario total: R$%.2f",ven*0.04,sal+ven*0.04);

}
