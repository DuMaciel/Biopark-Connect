#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int tamString(char str[]);
int contCorresp(char texto[],char frase[]);
void comparador(char texto[],char frase[],int comp[],int tamF);
void impMarca(char texto[],char frase[],int comp[],int tam);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int rep=0;
    do{
    system("cls");
    fflush(stdin);

    char texto[1000],frase[100];
    printf("Localizador de correspondencia\n\n");

    printf("Escreva o Texto: ");
    gets(texto);

    printf("\nEscreva oque deseja localizar: ");
    gets(frase);

    int tamF= tamString(frase);

    int corresp= contCorresp(texto,frase);

    int comp[corresp*2];

    comparador(texto,frase,comp,tamF);

    impMarca(texto,frase,comp,tamF);

    printf("\n\nDigite '1' para reiniciar e '0' para finalizar: ");
    scanf("%d",&rep);
    }while(rep!=0);

    return 0;
}

int tamString(char str[]){
    int j;
    for(j=0; str[j]!='\0'; j++){
    }
    j--;
    return j;
}

int contCorresp(char texto[],char frase[]){
    int contador=0;

    for(int i=0; texto[i]!='\0'; i++){
        if(toupper(texto[i])==toupper(frase[0])){
            int ind=0;
            for(int j=0; frase[j]!='\0'; j++){
                if(toupper(texto[i+j])!=toupper(frase[j])){
                    ind=1;
                    break;
                }
            }
            if(ind==0)
                contador++;
        }
    }
    return contador;
}

void comparador(char texto[],char frase[],int comp[], int tamF){
    int marca=0;

    for(int i=0; texto[i]!='\0'; i++){
        if(toupper(texto[i])==toupper(frase[0])){
            int ind=0;
            for(int j=0; frase[j]!='\0'; j++){
                if(toupper(texto[i+j])!=toupper(frase[j])){
                    ind=1;
                    break;
                }
            }
            if(ind==0){
                comp[marca]=i;
                comp[marca+1]=i+tamF;
                marca +=2;
            }
        }
    }
}

void impMarca(char texto[],char frase[],int comp[],int tam){
    int corresp=0;
    int cont=0;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    printf("\n\n");
    for(int i=0; texto[i]!='\0'; i++){
     if(comp[0+cont]==i){
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("%s",frase);
        SetConsoleTextAttribute(hConsole, saved_attributes);
        i= i+tam;
        corresp++;
     }
     else{
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("%c",texto[i]);
     }
     if(comp[1+cont]<=i)
        cont +=2;
    }
    printf("\n\nTotal de correspondências: %d",corresp);
}



