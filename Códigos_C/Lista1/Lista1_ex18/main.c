#include <stdio.h>
#include <stdlib.h>

int main()
{
    float carga, hora;
    printf("Calculadora de salario\n\n");
    printf("Digite as horas trabalhadas: ");
    scanf("%f",&hora);
    printf("Digite a carga horaria normal do mes: ");
    scanf("%f",&carga);
if(hora>=carga){
    printf("\nO Salario bruto: R$%.2f",(hora-carga)*15+carga*10);
    printf("\nO Salario liquido: R$%.2f",((hora-carga)*15+carga*10)*0.90);
}else{
    printf("\nO Salario bruto: R$%.2f",hora*10);
    printf("\nO Salario liquido: R$%.2f",hora*10*0.90);
    return 0;
}
}
