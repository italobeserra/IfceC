#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função SubLista:
int is_subList( int * const arrayA, int n_size, int const * arrayB, int m_size) {
  int i;
  int igualdade;
  int tamanho_viavel = n_size - m_size;

        for ( i = 0; i <= tamanho_viavel; i++) {
            igualdade = 1;
            for ( int j = 0; j < tamanho_viavel; j++)
            {
              if (arrayA[i + j] != arrayB[j]) {
                igualdade = 0;
                break;
              }    
            }
          }
    if (igualdade == 1 ) {
      printf("\n\nO vetor B é sublista do vetor A apartir do índice %d\n\n", i);
    }
    else {
      printf("\n\n-1");
    } 
 }

// Gerar vetores:
int main() {

  int n_size, m_size;

  printf("Tamanho desejado para o vetor A: ");
  scanf("%d", &n_size);

  printf("Tamanho desejado para o vetor B: ");
  scanf("%d", &m_size);
  
  // Alocar memória:
  int *arrayA = (int *)malloc(n_size * sizeof(int));
  int *arrayB = (int *)malloc(m_size * sizeof(int));

  if (arrayA == NULL || arrayB == NULL)
  {
    printf("Erro!\n\n");
    return 1;
  }
  

    if (m_size > n_size) {
      printf("O tamanho do vetor A deve ser maior que o do vetor B, tente novamente!\n");
      return 0;
    }
  
  // Aleatoriedade:

  srand(time(NULL));

      // Vetor A
          for (int i = 0; i < n_size; i++) {
            arrayA[i] = rand() % 10;
          }

      // Vetor B
          for (int j = 0; j < m_size; j++) {
            arrayB[j] = rand() % 10;
          }

  // Imprimir vetores

          // Vetor A
            printf("Vetor A: \n");
                for (int x = 0; x < n_size; x++) {
                printf(" %d", arrayA[x]);
                }
          
          // Vetor B
            printf("\n\nVetor B: \n");
                for (int y = 0; y < m_size; y++) {
                  printf( " %d" , arrayB[y]);
                }
        
  // Chamando a função
      is_subList(arrayA, n_size, arrayB, m_size);

  // liberar Memoria
      free(arrayA);
      free(arrayB);  

  return 0;
}