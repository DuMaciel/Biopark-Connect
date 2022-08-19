#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tem;
    char uni;
    printf("Conversor de temperatura\n\n");
    printf("Informe a unidade(C,K,F):");
    scanf("%c",&uni);
    printf("Informe a Temperatura:");
    scanf("%f",&tem);
    if((uni == 'C')||(uni == 'c')){
        printf("\nEm Celsius %.2fC",tem);
        printf("\nEm Kelvin: %.2fK",tem+273.15);
        printf("\nEm Fahrenheit %.2fF",tem*1.8+32);
    }else{
    if((uni == 'K')||(uni == 'k')){
        printf("\nEm Celsius %.2fC",tem-273.15);
        printf("\nEm Kelvin: %.2fK",tem);
        printf("\nEm Fahrenheit %.2fF",(tem-273.15)*1.8+32);
    }else{
    if((uni == 'F')||(uni == 'f')){
        printf("\nEm Celsius %.2fC",(tem-32)*5/9);
        printf("\nEm Kelvin: %.2fK",(tem-32)*5/9+273.15);
        printf("\nEm Fahrenheit %.2fF",tem);
    }}}
    return 0;
}
