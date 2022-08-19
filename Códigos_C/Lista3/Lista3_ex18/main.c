#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    float n1, n2, media;

    printf("----------------Notas----------------\n\n");

    printf("Digite o numero de alunos: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("\nPrimeira nota do aluno %d: ",i);
    scanf("%f",&n1);
    printf("Segunda nota do aluno %d: ",i);
    scanf("%f",&n2);
        media= (n1 +n2)/2;
    if(media>=6)
        printf("Aluno aprovado\nA media do aluno %d foi: %.2f\n\n",i,media);
    else
        printf("Aluno reprovado\nA media do aluno %d foi: %.2f\n\n",i,media);
    }

    return 0;
}
