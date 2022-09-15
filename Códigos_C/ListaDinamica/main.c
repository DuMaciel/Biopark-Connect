#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{
    int *v;
    int tamV;
    int quantE;
}tipoLista;



int main()
{


}


void allocLista(tipoLista *lista, int tam){
    lista->v = malloc(sizeof(int)*tam);
    lista->tamV = tam;
    lista->quantE = 0;
    return;
}

void reAllocLista(tipoLista *lista, int tam){
    tipoLista *listaAux;
    allocLista(listaAux, tam);

    copiarLista(lista, listaAux);

    free(lista);
    lista = listaAux;

    return;
}

void copiarLista(tipoLista *lista, tipoLista *listaAux){
    for(int i=0; i<lista->quantE; i++){
        listaAux->v[i] = lista->v[i];
    };
    listaAux->quantE = lista->quantE;
    return;
}

void printarLista(tipoLista *lista){
    for(int i=0; i<lista->quantE; i++){
        printf("%d  ", lista->v[i]);
    }
    return;
}


int inserirElementoOrd(tipoLista *lista, int elemento, int posicao){
    posicao -= 1;

    if(lista->quantE==lista->tamV || (posicao<0 || posicao>=lista->tamV)){
        if(lista->quantE==lista->tamV){
            printf("A Lista esta cheia");
            system("pause");
            return 0;
        } else {
            printf("A posicao digitada é invalida!");
            system("pause");
            return 0;
        }
    }

    for(int i= lista->quantE; i>posicao; i--){
        lista->v[i] = lista->v[i-1];
    }
    lista->v[posicao] = elemento;
    lista->quantE += 1;
    return 1;
};


int inserirElementoAle(tipoLista *lista, int elemento){
    if(lista->quantE==lista->tamV){
        printf("A Lista esta cheia");
        system("pause");
        return 0;
    }
    lista->v[lista->quantE] = elemento;
    lista->quantE += 1;
    return 1;
};

int removerElementoOrd(tipoLista *lista, int posicao){
    posicao -= 1;

    if(posicao<0 || posicao>=lista->tamV){
        printf("A posicao digitada é invalida!");
        system("pause");
        return 0;
    }

    for(int i= posicao; i>lista->quantE-1; i++){
        lista->v[i] = lista->v[i+1];
    }
    lista->quantE -= 1;
    return 1;
}

int removerElementoAle(tipoLista *lista, int posicao){
    posicao -= 1;

    if(posicao<0 || posicao>=lista->tamV){
        printf("A posicao digitada é invalida!");
        system("pause");
        return 0;
    }
    lista->v[posicao] = lista->v[lista->quantE-1];
    lista->quantE -= 1;
    return 1;
}

