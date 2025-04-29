#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int i, pos, armarios;
int op= 0;
srand(time(NULL));

printf("Olá, bem-vindo à biblioteca!\n\n");

        while (op!=3){

            for ( i = 0; i < 8; i++)
            {
                if(armarios & ( 1 << pos )) {
                    printf("Armário %d: Ocupado\n", i);
                }else{
                    printf("Armário %d: Livre\n", i);
                }
            }

                printf("[1] Ocupar armário.\n");
                printf("[2] Esvaziar armário.\n");
                printf("[3] Sair da biblioteca.\n");
                scanf("%d", &op);

                    switch (op){

                    case 1:{
                                do{
                                    pos = rand()%8;
                                }while(armarios & ( 1 << pos ));
                                    armarios |= ( 1 << pos );
                                    printf("Armário %d foi ocupado.\n", pos);
                        break;}

                    case 2:{

                        printf("Qual armário você pretende liberar?\n");
                        scanf("%d", &pos);

                        if (pos < 0 || pos > 7 ){
                            printf("Não temos esse armário aqui!");
                            break;
                        }

                                if((armarios |= ( 1 << pos ))) {
                                    armarios &= ~( 1 << pos );
                                    printf("Ok, desocupamos o armário %d!\n", pos);
                                }
                                else{
                                    printf("Armário %d já se encontra livre!\n", pos);
                                }

                        break;}
                    }
            }

        printf("Volte sempre!");

    return 0;

}

