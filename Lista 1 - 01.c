#include <stdio.h>
#include <conio.h>

int main()
{  

    int x;

    printf("Digite um núcmero decimal qualquer!\n\n");
    scanf("%d", &x);

    printf("%d em octal vale: %o\n",x,x);
    printf("%d em hexa vale: %X\n",x,x);

    return 0;

}