#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    printf("Ordem decrescente\n\n");
    printf("Primeiro numero: ");
    scanf("%d",&n1);
    printf("Segundo numero: ");
    scanf("%d",&n2);
    printf("Terceiro numero: ");
    scanf("%d",&n3);

    if(n1==n2 && n2==n3){
        printf("%d  %d  %d",n1,n2,n3);
    }else{
    if(n1>n2 && n1>n3)
        if(n2>=n3)printf("%d  %d  %d",n1,n2,n3);
        else printf("%d  %d  %d",n1,n3,n2);
    if(n2>n1 && n2>n3)
        if(n1>=n3)printf("%d  %d  %d",n2,n1,n3);
        else printf("%d  %d  %d",n2,n3,n1);
    if(n3>n1 && n3>n2)
        if(n1>=n2)printf("%d  %d  %d",n3,n1,n2);
        else printf("%d  %d  %d",n3,n2,n1);
    if(n1==n2 && n2>n3)
        printf("%d  %d  %d",n1,n2,n3);
    if(n2==n3 && n2>n1)
        printf("%d  %d  %d",n2,n3,n1);
    if(n1==n3 && n1>n2)
        printf("%d  %d  %d",n1,n3,n2);
    }

    return 0;
}
