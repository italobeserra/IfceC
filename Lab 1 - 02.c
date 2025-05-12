#include <stdio.h>
#define TAM 8

int main() {
    int bin, bit;
    int decimal = 0;
    int base = 1;

    printf("Insira um número binário até 32 bits: ");
    scanf("%d", &bin);
    
    for (int i = 0; i < TAM; i++) {
        bit = bin % 10;  
        decimal += base * bit ;   
        bin = bin / 10;           
        base = base * 2;               
    }

    if (decimal > 127) { 
        decimal = decimal - 256;
    }

    printf("O número %d em binário vale: %d\n", bin, decimal);
    return 0;
}