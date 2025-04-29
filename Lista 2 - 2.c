#include <stdio.h>

int main() {

int num1, num2;
int *p1, *p2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1); 

    printf("Digite o segundo número: ");
    scanf("%d", &num2); 

p1 = &num2;
p2 = &num1;

printf("O Primeiro número passou a ser: %d\n", *p1);
printf("O Segundo número passou a ser : %d\n", *p2);

return 0;

}