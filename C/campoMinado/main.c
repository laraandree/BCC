#include "campo_minado.h"

//char matrix[3][3]={{'0','0','0'},{'0','0','0'},{'0','0','0'}};
//char matrixFake[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int main(){
    //int qtnBomba; /* Contadores, escolha para dificuldade*/
    int continuar = 1;

    while (continuar == 1){

        printf("**********************************Campo Minado**********************************\n");
        printf("*                             Caio Cesar Faiz Capote                           *\n");
        printf("*                         Andre Mateus Fernandes de Lara                       *\n");
        printf("********************************************************************************\n");
/*
        printf("\tChoose the difficulty:\n\n\n");
        printf("\t1 - Easy - One bomb\n\n");
        printf("\t2 - Medium - Two bombs\n\n");
        printf("\t3 - Hard - Three bombs\n\n\n");
        scanf("%d", &qtnBomba);
*/
        inicializa_matriz();
        rodaJogo();
        printf("Do you wanna play again? [1] YES [0] NO : ");
        scanf("%d", &continuar);
        system("cls");

    }
    system("pause");
    return 0;
}
