#include <stdio.h>

int main(){

    int x;

    printf("Digite um inteiro e diremos seu quadrado:  \n\n");
    scanf("%d", &x);

    printf("O quadrado de %d vale: %d", x, (x * x));

    return 0;
}