#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n = 10;
    int vetor[n];
    int count = 0;

    srand(time(NULL));

    printf("Vetor gerado:\n");
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 10;
        printf("%d ", vetor[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vetor[i] == vetor[j]) {
                count++;
                break; 
            }
        }
    }

    int x = n - count;

    printf("\n\nApós excluirmos os números repetidos o seu novo vetor tem tamanho: %d\n", x);

    return 0;
}