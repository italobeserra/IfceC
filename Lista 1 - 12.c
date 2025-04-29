#include <stdio.h>

int main()
{
    int a, b, vazio; 
    
    printf("Digite um valor inteiro para A:  ");
    scanf("%d", &a);

    printf("Digite um valor inteiro para B:  ");
    scanf("%d", &b);

    vazio = a; 
    a = b;
    b = vazio;

    printf("\nApós a troca de valores, A = %d e B = %d", a, b);
    
    return 0;

}