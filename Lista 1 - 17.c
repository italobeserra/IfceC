#include <stdio.h>

int main(){


    float r;
    float pi = 3.14159;

    printf("Digite um valor para ser o raio do círculo:  \n\n");
    scanf("%f", &r);

    printf("\nA área do círculo vale: %f\n", ( pi * ( r * r )) );
    printf("\nA circunferência do círculo vale: %f\n", ( 2 * pi * r));
    printf("\nO diâmetro do círculo vale: %f\n", ( 2 * r ));

    return 0;

}