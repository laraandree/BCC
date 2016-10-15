#include "campo_minado.h"

void imprimeCampoMinado(){
    system("cls");
    printf("\tLet's go! Start the game!\n\n");
    int i =0, j=0;

    printf("\t\t\n");
    for(; i < N; i++)
       printf("\t%d",i+1); /*Impressao das colunas da matriz*/
    printf("\n\n");

    for(i=0; i < N; i++){
        printf("%d", i+1);
        for(j=0; j < N; j++){
            printf("\t%c", matrixFake[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}
void inicializa_matriz(){
    int i=0,j=0;
    char c = '0';
    for(;i<N;i++){
        for(;j<N;j++)
            matrix[i][j] = '0';
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
            matrixFake[i][j] = c++;
    }
}
int verificaPosicao(int posicao){ /*verifica se tem bomba na posicao*/
    switch (posicao){
        case 1:
            if (matrix[0][0]=='1'){
                xFake = 0;
                yFake = 0;
                return 1;
            }else{
                xFake = 0;
                yFake = 0;
                return 0;
            }

            break;
        case 2:
            if (matrix[0][1]=='1'){
                xFake = 0;
                yFake = 1;
                return 1;
            }else{
                xFake = 0;
                yFake = 1;
                return 0;
            }

        case 3:
             if (matrix[0][2]=='1'){
                xFake = 0;
                yFake = 2;
                return 1;
            }else{
                xFake = 0;
                yFake = 2;
                return 0;
            }

        case 4:
             if (matrix[1][0]=='1'){
                xFake = 1;
                yFake = 0;
                return 1;
            }else{
                xFake = 1;
                yFake = 0;
                return 0;
            }

        case 5:
             if (matrix[1][1]=='1'){
                xFake = 1;
                yFake = 1;
                return 1;
            }else{
                xFake = 1;
                yFake = 1;
                return 0;
            }

        case 6:
             if (matrix[1][2]=='1'){
                xFake = 1;
                yFake = 2;
                return 1;
            }else{
                xFake = 1;
                yFake = 2;
                return 0;
            }

        case 7:
             if (matrix[2][0]=='1'){
                xFake = 2;
                yFake = 0;
                return 1;
            }else{
                xFake = 2;
                yFake = 0;
                return 0;
            }

        case 8:
             if (matrix[2][1]=='1'){
                xFake = 2;
                yFake = 1;
                return 1;
            }else{
                xFake = 2;
                yFake = 1;
                return 0;
            }

        case 9:
             if (matrix[2][2]=='1'){
                xFake = 2;
                yFake = 2;
                return 1;
            }else{
                xFake = 2;
                yFake = 2;
                return 0;
            }

        default:
            printf("ERRO-01 verificaPosicao");
            return 3;
            break;
    }
}
void rodaJogo(){

    imprimeCampoMinado();

    int posicao, escolha = 4, win = 0;
    int yAleatorio = 1 , xAleatorio = 0;
    int temBomba = 0;
    i = 0;
inicializa_matriz();
    //Distribui bombas
    while(i < N){
        srand(time(NULL));
        yAleatorio = rand() % N, xAleatorio = rand() % N;

        if (matrix[xAleatorio][yAleatorio] == '0'){
            matrix[xAleatorio][yAleatorio] = '1';
            i++;
        }
    }

    /* Posicao aleatoria da bomba */
    int jogadasCorretas = 0;
    int jogadasPossiveis = ((N*N)-N);
    while(jogadasCorretas < jogadasPossiveis && temBomba == 0){
        printf("Enter a location (Ex: 1):\n");
        scanf("%d", &posicao);
        temBomba = verificaPosicao(posicao);

        if (matrixFake[xFake][yFake] != '-'){
            if(temBomba == 1){
                matrixFake[xFake][yFake] = '*';
                imprimeCampoMinado();
                printf("YOU LOSE, SUCKER!\n");
            }else{
                /*Verifica se da erro no switch*/
                if(temBomba == 3)
                    break;
                matrixFake[xFake][yFake] = '-';
                imprimeCampoMinado();
                jogadasCorretas++;
            }
        }else
            printf("\n\nINVALID LOCATION\n\n");
    }

    if (jogadasCorretas == jogadasPossiveis)
        printf("YOU WIN WITH %d TRY", jogadasCorretas);
}
