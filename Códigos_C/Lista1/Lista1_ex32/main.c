#include <stdio.h>
#include <stdlib.h>

int main()
{
    float massa;
    printf("Calculadora de massa\n");
    printf("Digite a massa da pessoa(KG): ");
    scanf("%f",&massa);

    printf("A massa em gramas: %.2f gramas",massa*1000);
    return 0;
}
