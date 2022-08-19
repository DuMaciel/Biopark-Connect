#include <stdio.h>
#include <stdlib.h>

int main()
{
    float massa;
    printf("Calculadora de massa\n");
    printf("Digite a massa atual da pessoa(KG): ");
    scanf("%f",&massa);

    printf("Se a pessoa engordar 15%%: %.2fKG\nSe a pessoa emagrecer 20%%: %.2fKG",massa*1.15,massa*0.8);
    return 0;
}
