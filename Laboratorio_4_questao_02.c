#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Criar função:
int compute_frequency( int * const arrayA, int n_size, int * const arrayB, int m_size) {

    int count = 0;
    int vetor_frequencia[m_size];

            for (int i = 0; i < m_size; i++) {
              int count = 0;
                  for (int j = 0; j < n_size; j++) {
                    if (arrayB[i] == arrayA [j])
                    {
                      count++; 
                    }
                  }
              arrayB[i] = count;
            }
  
      printf("\n\nVetor B será: ");
          for (int z = 0; z < m_size; z++) {
            printf(" %d", arrayB[z]);
          }
        
  return 0;

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
      compute_frequency(arrayA, n_size, arrayB, m_size);

  // liberar Memoria
      free(arrayA);
      free(arrayB);  

  return 0;
}