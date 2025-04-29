#include <stdio.h>

int main() {

int num1, num2, soma;
int *p1, *p2, *pSoma; 


    printf("Digite o primeiro número: ");
    scanf("%d", &num1); 

    printf("Digite o segundo número: ");
    scanf("%d", &num2); 


p1 = &num1;  
p2 = &num2;  
pSoma = &soma; 

    
*pSoma = *p1 + *p2;  

   
    printf("A soma de %d e %d é %d\n", *p1, *p2, *pSoma);  
    printf("O endereço de memória onde a soma está armazenada é %p\n", &pSoma);

return 0;

}