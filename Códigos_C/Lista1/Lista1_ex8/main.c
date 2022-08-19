#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float p1=0,p2=0,p3=0;
    printf("Nota Final\n\n");

    printf("Nota P1:");
    scanf("%f",&p1);
    printf("Nota P2:");
    scanf("%f",&p2);
    printf("Nota P3:");
    scanf("%f",&p3);
    printf("A nota final: %.2f",(p1*1+p2*2+p3*3)/6);
    return 0;
}
