#include <stdio.h>

int main(){


    int x, y;

    printf("Digite um valor para X:  \n\n");
    scanf("%d", &x);
    printf("Digite um valor para Y:  \n\n");
    scanf("%d", &y);

    ( x % y ) ? printf("%d e %d não são divisíveis", x, y) :  printf("%d e %d são divisíveis", x, y);

 return 0;

}