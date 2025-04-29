#include <stdio.h>

int main()
{

    int dias;
    float liq, bruto;
    
    printf("Iremos calcular o seu ganho de acordo com os dias trabalhados e os valores das bonificações.  ");
    getchar();

    printf("Quantos dias você trabalhou?  ");
    scanf("%d", &dias);

    if (0 < dias <= 10)
    {
        bruto = ( 50.25 * dias );
        liq = bruto - ( bruto * 0.1 );
        printf("Seu ganho será de:  %.2f", liq);
    }
    else if (10 < dias <= 20)
    {
        bruto = ( 50.25 * dias );
        liq = ( bruto + ( bruto * 0.2 )) - (( bruto + ( bruto * 0.2 )) * 0.1);
        printf("Seu ganho será de:  %.2f", liq);
    }
    else if (20 < dias)
    {
        bruto = ( 50.25 * dias );
        liq = ( bruto + ( bruto * 0.3 )) - (( bruto + ( bruto * 0.3 )) * 0.1);
        printf("Seu ganho será de:  %.2f", liq);
    }
    

    return 0;

}