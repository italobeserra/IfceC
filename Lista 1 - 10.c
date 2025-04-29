#include <stdio.h>

int main()
{
    float d, r, c; 
    
    printf("Quanto vale o dollar atualmente??\n");
    scanf("%f", &d);

    printf("Quantos reais você quer converter??\n");
    scanf("%f", &r);

    c = r / d; 
   
    printf("O valor total de dolares que você consegue comprar é:   %.2f\n", c);
    
    return 0;
    
}