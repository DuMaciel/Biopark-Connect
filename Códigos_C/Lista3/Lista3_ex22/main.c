#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Viajando\n\n");
    int km, total=0;

    for(int i=1;;i++){
    printf("Cidade %d, km percorida: ",i);
    scanf("%d",&km);

    total= total +km;

    if(total>=4000){
        printf("Total percorido: %dkm",total);
        break;
    }
    }
    return 0;
}
