#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int iniciar_vetor(int vetor[TAM], int i) {
    int num, igual;

    for (int tentativa = i; tentativa < TAM; tentativa++) {
        num = rand() % 101; 
        igual = 0;

        for (int j = 0; j < i; j++) {
            if (vetor[j] == num) {
                igual = 1;
                break;
            }
        }

        if (!igual) {
            return num;
        }
    }
}

int main() {
    int vetor[TAM];
    char opcao;

    srand(time(NULL)); 

    puts("[1] Adicionar número.\n[2] Encerrar o programa.");

    for (int i = 0; i < TAM; i++) {
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                vetor[i] = iniciar_vetor(vetor, i);
                printf("Número adicionado ao vetor: %d\n", vetor[i]);

                break;

            case '2':
                puts("Até a próxima.\n");
                return 0;

            default:
                printf("Opção inválida. Digite apenas [1] ou [2].\n");
                i--; 
                break;
        }
    }

    printf("Vetor cheio!\n");

    return 0;
}