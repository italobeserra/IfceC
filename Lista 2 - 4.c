#include <stdio.h>
#include <stdlib.h> 

int main() {
    
 
int vetor, quan;   
int **pv; 
 
    printf("Quantos elementos terá o seu vetor: \n");
    scanf("%d", &quan);

    if (quan <= 0) {
    printf("O tamanho do vetor deve ser maior que zero.\n");
    return 1;
    }
    
    pv = malloc(1 * sizeof(int *));
    if (pv == NULL) {
    printf("Erro ao alocar memória.\n");
    return 1;
    }
 
    pv[0] = malloc(quan * sizeof(int));
    
 
    if (pv[0] == NULL) {
    printf("Erro ao alocar memória para o vetor.\n");
    free(pv);  
    return 1;
    }

    for (vetor = 0; vetor < quan; vetor++) {
        printf("Digite o %d° elemento do seu vetor: \n", vetor + 1);
        scanf("%d", &pv[0][vetor]);
    }

    printf("Imprimindo o vetor: \n");
    
    for (vetor = 0; vetor < quan; vetor++) {
        printf("%d ", pv[0][vetor]);
        }
    
    printf("\n");

    
    
   
    free(pv[0]); 
        
    
    free(pv); 

return 0;

}
