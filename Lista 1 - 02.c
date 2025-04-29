#include <stdio.h>

int main()
{  
    float x;

    printf("Digite um número real qualquer!\n\n");
    scanf("%f", &x);

    printf("seu número real com apenas uma casa decimal é: %.1f", x);
    

    return 0;

}