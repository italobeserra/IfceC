#include <stdio.h>

int main(){

    int x;

    printf("Digite um inteiro e diremos seu antecessor e sucessor:  \n\n");
    scanf("%d", &x);

    printf("O antecessor de %d é: %d\n", x, (x - 1));
    printf("O sucessor de %d vale: %d\n", x, (x + 1));

    return 0;
}