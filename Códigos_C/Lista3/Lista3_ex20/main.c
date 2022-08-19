#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Quantidade de gatos e cachorros\n\n");
    int ani, cat=0, dog=0, tipo;

    printf("1 - Cachorro\n2 - Gato\n\nDigite a quantidade de animais: ");
    scanf("%d",&ani);

    for(int i=1;i<=ani;i++){
    printf("Tipo do animal %d: ",i);
    scanf("%d",&tipo);
    if(tipo==1)
        dog++;
    else if(tipo==2)
        cat++;
    else{
        printf("Tipo invalido\n");
        i--;
    }
    }

    printf("O total de cachorro: %d\nO total de gato: %d",dog,cat);
    return 0;
}
