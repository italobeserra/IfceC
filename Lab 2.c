#include <stdio.h>
#define MX 2000

int senhas[MX];
int senhas_p[1000], senhas_N[1000];
int senha_atual = 0;
int senha_chamada;
int c_n = 0, c_p = 0, i = 0, k = 0;
char escolha;
int n_senhas;


int main(){

while (senha_atual != 999)
{

    printf("\n\nBem vindo ao atendimento IFCE, escolha uma opção:\n\n\t[N] Inserir senha normal.\n\t[P] Inserir senha de prioridade.\n\t[C] Consumir senha.\n\t[V] Visualizar senhas pendentes.\n\t[S] Sair do atendimento.\n\n");
    scanf(" %c", &escolha);

    switch (escolha)
    {
        case 'N':
            printf("Você recebeu a senha normal n° N%d", senha_atual);
            senhas_N[k] = senha_atual;
            n_senhas[senhas] = senhas_N[k];
            n_senhas++;
            k++;
            senha_atual++;
            break;

        case 'P':
            printf("Você recebeu a senha normal n° P%d", senha_atual);
            senhas_p[i] = senha_atual; 
            n_senhas[senhas] = senhas_p[i];
            n_senhas++;
            i++;
            senha_atual++;
            break;

        case 'C':
            if(c_n < k && (c_p >= i || c_n <= c_p)){
                printf("\nChamando senha normal número N%d\n", senhas_N[c_n]);
                c_n++;
            }else if(c_p < i){
                printf("\nChamando senha prioridade número P%d\n", senhas_p[c_p]);
                c_p++;   
            }else{
            puts("\nNenhuma senha disponivel");
            }
            break;
        
        case 'V':
            printf("Senhas não chamadas até agora:\n");
            printf("Normais:");
            for(int j = c_n; j < k ; j++){
            printf("N%d ", senhas_N[j]);
            }
            puts("\nPrioridades:");
            for(int z = c_p; z < i; z++){
            printf("P%d ",senhas_p[z]);
            }
            printf("\n\n");
            break;

        case 'S':
            printf("Até logo, volte sempre!");
            return 0;

        default:
            printf("Opção inválida, insira outra.");
            break;

    }
}

return 0;

}