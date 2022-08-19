#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tipo;
    printf("Calculadora de area\n\n");
    printf("'T' para trapezio\n'Q' para quadrado\n'L' para lozangulo\nDigite(T,Q,L): ");
    scanf("%c",&tipo);

    if((tipo=='T')||(tipo=='t')){
        float baseP,baseG,alt;
        printf("\nBase menor: ");
        scanf("%f",&baseP);
        printf("Base maior: ");
        scanf("%f",&baseG);
        printf("Altura: ");
        scanf("%f",&alt);
        printf("\nA area do trapezio: %.2f",(baseP+baseG)*alt/2);
    }else if((tipo=='Q')||(tipo=='q')){
        float base,alt;
        printf("\nBase: ");
        scanf("%f",&base);
        printf("Altura: ");
        scanf("%f",&alt);
        printf("\nA area do quadrado: %.2f",base*alt);
    }else if((tipo=='L')||(tipo=='l')){
        float diaP,diaG;
        printf("\nDiagonal menor: ");
        scanf("%f",&diaP);
        printf("Diagonal maior: ");
        scanf("%f",&diaG);
        printf("\nA area do losango: %.2f",diaP*diaG/2);
    }else
        printf("Tipo invalido");

    return 0;
}
