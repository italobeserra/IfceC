#include <stdio.h>

int main(){
    
    float valor;
    
    //notas
    int duzentos = 0, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um_real = 0, cinquenta_centavos = 0, vintecinco_centavos = 0, dez_centavos = 0, cinco_centavos = 0; 

    printf("Me diga um valor qualquer ( Adicione sempre duas casas após a vírgula, exemplo: '553.70' ): \n");
    scanf("%f", &valor);

    while (valor != 0)
    {
        if (valor >= 200)
        {
            valor = valor - 200;
            duzentos++;
        }
        else if ( 200 > valor && valor > 99.99 )
        {
            valor = valor - 100;
            cem++;
        }
        else if ( 100 > valor && valor > 49.99 )
        {
            valor = valor - 50;
            cinquenta++;
        }      
        else if ( 50 > valor && valor > 19.99 )
        {
            valor = valor - 20;
            vinte++;
        }
        else if ( 20 > valor && valor > 9.99 )
        {
            valor = valor - 10;
            dez++;
        }
         else if ( 10 > valor && valor > 4.99 )
        {
            valor = valor - 5;
            cinco++;
        }
         else if ( 5 > valor && valor > 1.99 )
        {
            valor = valor - 2;
            dois++;
        }
         else if ( 2 > valor && valor > 0.99 )
        {
            valor = valor - 1;
            um_real++;
        }
         else if ( 1 > valor && valor > 0.49 )
        {
            valor = valor - 0.50;
            cinquenta_centavos++;
        }
        else if ( 0.50 > valor && valor > 0.24 )
        {
            valor = valor - 0.25;
            vintecinco_centavos++;
        }
         else if ( 0.25 > valor && valor > 0.09 )
        {
            valor = valor - 0.10;
            dez_centavos++;
        }
         else if ( 0.09 > valor && valor > 0.04 )
        {
            valor = valor - 0.05;
            cinco_centavos++;
        }
        else{
            break;
        }
    }

    printf("Cédulas utilizadas:\n \tduzentos = %d\n \tcem = %d\n \tcinquenta = %d\n \tvinte = %d\n \tdez = %d\n \tcinco = %d\n \tdois = %d\n \tum real = %d\n \tcinquenta centavos = %d\n \tdez centavos = %d\n \tcinco centavos = %d\n", duzentos, cem, cinquenta, vinte, dez, cinco, dois, um_real, cinco_centavos, dez_centavos, cinco_centavos);

    return 0;
}