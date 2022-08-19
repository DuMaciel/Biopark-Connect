#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Quina\n\n");

    int vR[5], vS[10], acertos=0;

    for(int i=0;i<sizeof(vR)/sizeof(vR[0]);i++){

        printf("Digite numero %d da quina: ",i+1);
        scanf("%d",&vR[i]);
    }
    printf("\n");

    for(int i=0;i<sizeof(vS)/sizeof(vS[0]);i++){

        printf("Digite o numero %d apostado: ",i+1);
        scanf("%d",&vS[i]);

        for(int j=0;j<5;j++)
            if(vS[i]==vR[j])
                acertos++;


    }
    printf("\n\nNumero de acertos: %d\n",acertos);
    return 0;
}
