#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;
    printf("Media Final\n");
    printf("Primeira nota: ");
    scanf("%f",&n1);
    printf("Segunda nota: ");
    scanf("%f",&n2);

    printf("A media: %.2f",(n1*2+n2*3)/5);
    return 0;
}
