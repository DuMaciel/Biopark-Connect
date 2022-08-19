#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
        char res;
        printf("O triangulo e retangulo[S,N]: ");
        scanf("%c",&res);

    if((res=='S')||(res=='s')){
        float c1,c2;
        printf("Medida da Hipotenusa\n\n");
        printf("Medida cateto 1: ");
        scanf("%f",&c1);
        printf("Medida cateto 2: ");
        scanf("%f",&c2);

        printf("\nA medida da hipotenusa: %.2f",pow(pow(c1,2)+pow(c2,2),1/2.0));
    }else{
        float l1,l2;
        double ang;

        printf("Medida do terceiro Lado\n\n");
        printf("Medida lado 1: ");
        scanf("%f",&l1);
        printf("Medida lado 2: ");
        scanf("%f",&l2);
        printf("Angulo entre os catetos(graus): ");
        scanf("%lf",&ang);

        ang=(ang*M_PI)/180;
        printf("\nA medida do terceiro lado: %.2f",pow(pow(l1,2)+pow(l2,2)-2*l1*l2*cos(ang),1/2.0));
    }
    return 0;
}
