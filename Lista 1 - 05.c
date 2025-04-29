#include <stdio.h>
#include <math.h>

int main(){

float altura;

printf("Hoje iremos calcular seu peso ideal, levando em consideração seu gênero e altura.\n Pressione enter para continuar:\n");
getchar();

int gen;

printf("Primeiro selecione seu gênero: \n M: [1]\n F: [2]\n\n");
scanf("%d", &gen);


    float ideal;

    switch (gen)
    {
    case 1:
        printf("\nOlá, amigo. Agora me informe sua altura em metros:\n  ");
        scanf("%f", &altura);

        ideal = ( 72.7 * altura ) - 58;
        
        printf("Seu peso ideal é:  %.2f ", ideal);
        break;
   
    case 2:
        
        printf("\nOlá, amiga. Agora me informe sua altura em metros:\n ");
        scanf("%f", &altura);  
    
        ideal = ( 62.1 * altura ) - 44.7;
        
        printf("Seu peso ideal é:  %.2f ", ideal);

        break;

    default:
        printf("\nEscolha inválida\n\n");
    }

printf("\nObrigado, volte sempre.\n");

return 0;
    
}
