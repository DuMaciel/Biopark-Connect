#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1,n2,n3;
    int iden;
    printf("Aprovado ou reprovado\n\n");
    printf("Primeira nota: ");
    scanf("%f",&n1);
    printf("segunda nota: ");
    scanf("%f",&n2);
    printf("Terceira nota: ");
    scanf("%f",&n3);
    printf("\nDigite a identificação: ");
    scanf("%d",&iden);

    if((n1+n2+n3)/3>=6)
        printf("A media do aluno: %.2f\nAluno %d foi aprovado",(n1+n2+n3)/3,iden);
    else if((n1+n2+n3)/3>=4)
        printf("A media do aluno: %.2f\nAluno %d esta em recuperação",(n1+n2+n3)/3,iden);
    else
        printf("A media do aluno: %.2f\nAluno %d esta reprovado",(n1+n2+n3)/3,iden);
    return 0;

}
