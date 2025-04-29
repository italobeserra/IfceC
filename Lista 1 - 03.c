#include <stdio.h>

int main()
{  
    float x;

    printf("Digite um número qualquer!\n\n");
    scanf("%f", &x);

    float t = x * 3;
    float q = x * x;
    float m = x / 2; 
    
    printf("seu triplo é:%.0f\n", t);
    printf("seu quadrado é: %.0f\n", q);
    printf("seu meio é: %.2f\n", m);
    

    return 0;

}