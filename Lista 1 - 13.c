#include <stdio.h>

int main()
{
    int c, f;
    
    printf("Quantos °C faz na sua cidade agora?   ");
    scanf("%d", &c);

    f = (9 * c + 160) / 5;
    
    printf("\n %d graus Celcius vale %d graus Fahrenheit.", c, f);
    
    return 0;

}