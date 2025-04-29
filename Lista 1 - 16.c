#include <stdio.h>
#include <stdlib.h> 

int main(){

    int x;

    printf("Digite um valor inteiro qualquer:  \n\n");
    scanf("%d", &x);

    printf("\nO módulo do valor escrito por você vale: %d", abs(x));

return 0;
}