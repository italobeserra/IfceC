#include <stdio.h>

int main()
{
    int x, y; 
    
    printf("Digite o primeiro número:  ");
    scanf("%d", &x);
    printf("Digite o segundo número:  ");
    scanf("%d", &y);
   
    printf("\nsoma: %d", ( x + y ));

    printf("\nsubtração: %d", ( x - y ));

    printf("\nmultiplicação: %d", ( x * y ));

    printf("\ndivisão: %d", ( x / y ));
    
    printf("\nresto: %d", ( x % y ));
    
    return 0;
    
}