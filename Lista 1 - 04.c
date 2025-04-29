#include <stdio.h>

int main()
{
    float c; 
    
    printf("Qual o valor da sua conta??\n");
    scanf("%f", &c);

    float t = c / 10 + c;
   
    
    printf("O valor total da sua conta com o adicional do garçom vale: %.2f\n", t);
    
    return 0;
    
}