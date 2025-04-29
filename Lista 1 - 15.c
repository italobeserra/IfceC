#include <stdio.h>

int main()
{

    float desc, salario, liq;
    
    printf("Iremos calcular o seu salário bruto e líquido de acordo com as taxas do INSS.  ");
    getchar();

    printf("Qual seu salário total? \n ");
    scanf("%f", &salario);

    if ( 0 < salario < 1413.00 )
    {
        desc = ( salario * 0.075 );
        liq = salario - desc;
        printf("Sem desconto você ganharia: %f\n", salario);
        printf("Seu ganho líquido será de:  %f\n", liq);
    }
    else if ( 1412.00 < salario < 2666.69 )
    {
        desc = ( salario * 0.09 ) - 21.18;
        liq = salario - desc;
        printf("Sem desconto você ganharia: %f\n", salario);
        printf("Seu ganho líquido será de:  %f\n", liq);
    }
     else if ( 2666.68 < salario < 4000.04 )
    {
        desc = ( salario * 0.090 ) - 101.18;
        liq = salario - desc;
        printf("Sem desconto você ganharia: %f\n", salario);
        printf("Seu ganho líquido será de:  %f\n", liq);
    }

    else if ( 4000.03 < salario < 7786.03 )
    {
        desc = ( salario * 0.14 ) - 181.18;
        liq = salario - desc;
        printf("Sem desconto você ganharia: %f\n", salario);
        printf("Seu ganho líquido será de:  %f\n", liq);
    }
    else{
        printf ("valor inválido para o INSS.\n");
    }
    return 0;
}