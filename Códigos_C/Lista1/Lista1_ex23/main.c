#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altsua,medsom1,medsom2;
    printf("Altura de edificio!\n");
    printf("Sua altura: ");
    scanf("%f",&altsua);
    printf("Medida da sua sombra: ");
    scanf("%f",&medsom1);
    printf("Medida da sombra do edificio: ");
    scanf("%f",&medsom2);

    printf("A altura do edificil: %.2f",(medsom2/medsom1)*altsua);

    return 0;
}
