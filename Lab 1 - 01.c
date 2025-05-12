#include <stdio.h>

int main(){
    int a;
    puts("Digite um número:");
    scanf("%d",&a);

    printf("A forma hexadecimal do número digitado é: 0x%08X", a);
    return 0;
}