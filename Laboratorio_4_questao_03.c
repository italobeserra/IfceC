#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para remover repetições
int remove_repetidos(int *arrayA, int n, int *arraySemRepetidos) {
  int k = 0;
  for (int i = 0; i < n; i++) {
      int repetido = 0;
      for (int j = 0; j < k; j++) {
          if (arrayA[i] == arraySemRepetidos[j]) {
              repetido = 1;
              break;
          }
      }
      if (!repetido) {
          arraySemRepetidos[k++] = arrayA[i];
      }
  }
  return 0;
}

// Função da frequencia
void compute_frequency(int * const arrayA, int n_size, int * const arrayB, int m_size) {
  compute_frequency(arrayA, n_size, arrayB, m_size); 

  for (int i = 0; i < m_size; i++) {
      printf("%d: ", arrayB[i]); 
      for (int j = 0; j < arrayB[i]; j++) {
          printf("*");
      }
      printf("\n");
  }
}


// Vetor:

  int main() {

    int arrayA[] = {2, 4, 5, 5, 4, 3, 4};
    int n = 7;

    int arrayB[7];
    int m = remove_repetidos(arrayA, n, arrayB);

    compute_frequency(arrayA, n, arrayB, m);

    return 0;
}
