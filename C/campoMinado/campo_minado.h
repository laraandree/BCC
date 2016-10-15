#define N 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char matrix[N][N];
char matrixFake[N][N];
int xFake;
int yFake;
int i, j;


void inicializa_matriz();
void imprimeCampoMinado();
int verificaPosicao(int posicao);
void rodaJogo();


/*
No TDE anterior voc� criou uma vers�o simplificada do jogo campo minado. Naquela vers�o usamos um tabuleiro 3x3,
mas agora vamos adaptar para que o jogo seja NxN e o valor de N possa ser definido no momento da compila��o.
Al�m disso, voc� tamb�m deve modificar o c�digo anterior para que seja dividido em tr�s arquivos:

campo_minado.h  (cont�m a assinatura das fun��es do seu jogo e a defini��o de N,  a qual ser� usada na defini��o do tabuleiro).
campo_minado.c  (cont�m a implementa��o das fun��es definidas no arquivo de cabe�alho e tamb�m cont�m a defini��o do tabuleiro).
main.c  (cont�m apenas implementa��o da fun��o main do programa).
*/
