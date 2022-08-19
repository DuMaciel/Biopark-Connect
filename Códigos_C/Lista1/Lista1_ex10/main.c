#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
    float x1=0,x2=0,y1=0,y2=0,d=0;
    printf("Distancia entre pontos\n\n");

    printf("Cordenada X do P1:");
    scanf("%f",&x1);
    printf("Cordenada Y do P1:");
    scanf("%f",&y1);
    printf("Cordenada X do P2:");
    scanf("%f",&x2);
    printf("Cordenada Y do P2:");
    scanf("%f",&y2);
    d=pow((pow((x2-x1),2)+pow((y2-y1),2)),1/2.0);
    printf("A distancia entre os pontos: %.2f",d);
    return 0;
}
