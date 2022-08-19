#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Reservas\n\n");
    printf("1 - Área de fumantes\n2 - Área de não fumantes\n");
    int tipo, nfu=25, fu=25;

    for(int i=1;;i++){
    printf("\nTipo da reserva %d: ",i);
    scanf("%d",&tipo);
    if(tipo==1){
        if(fu>0){
            fu--;
            printf("Restam %d messas na área de fumantes\n",fu);
        }else{
            printf("Não á mais messas na área de fumantes disponiveis!");
            i--;
        }
    }
    else if(tipo==2){
        if(nfu>0){
            nfu--;
            printf("Restam %d messas na área de não fumantes\n",fu);
        }else{
            printf("Não á mais messas na área de não fumantes disponiveis!");
            i--;
        }
    }
    else{
        printf("Tipo invalido\n");
        i--;
    }
    if(fu==0 && nfu==0){
        printf("\nNão á mais messas disponiveis!");
        break;
    }
    }

    return 0;
}
