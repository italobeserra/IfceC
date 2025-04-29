#include <stdio.h>

int main() {
    
int num, menor;
int *pnum, *pmenor;

pnum = &num;
pmenor = &menor;

*pmenor = __INT_MAX__;

do{

printf("Digite um número, ou caso queira sair do programa digite ( 0 ):  ");
scanf("%d", pnum);

    if (*pnum == 0){
        break;
    }
    if (*pnum < *pmenor)
    {
       *pmenor = *pnum;
    }
        
printf("O menor valor escrito é =  %d\n", *pmenor);

} while (num != 0);

printf("Encerrando o programa...\n");

return 0;

}