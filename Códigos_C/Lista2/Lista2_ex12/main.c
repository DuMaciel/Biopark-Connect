#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    printf("Um Triangulo ou nao\n");
    printf("Digite o primeiro lado: ");
    scanf("%f",&x);
    printf("Digite o segundo lado: ");
    scanf("%f",&y);
    printf("Digite o terceiro lado: ");
    scanf("%f",&z);
    if(x+y>z && x+z>y && y+z>x){
        if(x==y && y==z)
            printf("Triangulo equilatero.");
        else if(x==y || y==z || x==z)
            printf("Triangulo isoceles.");
        else
            printf("Triangulo escaleno.");
    }else
        printf("Nao e um triangulo.");



    return 0;
}
