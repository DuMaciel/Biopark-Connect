#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sand;
    printf("Lanchonete Gostosura\n\n");
    printf("A quantidade de sanduiches: ");
    scanf("%f",&sand);

    printf("\nO peso total de queijo: %.2fKG",sand*0.10);
    printf("\nO peso total de presunto: %.2fKG",sand*0.05);
    printf("\nO peso total de carne: %.2fKG",sand*0.10);

    return 0;
}
