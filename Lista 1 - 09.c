#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main(){

    int x[TAM];

    printf("Digite um valor real para o comprimento, largura e altura ( siga essa ordem ): \n\n");

    int k, v;   
    for ( k = 0; k < TAM; k++)
    {
        scanf("%d", &x[k]);
    }

    v = x[0] * x[1] * x[2];
    printf("\n\nO volume da caixa vale: %d\n", v);

    return 0;
}