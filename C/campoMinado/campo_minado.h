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
No TDE anterior você criou uma versão simplificada do jogo campo minado. Naquela versão usamos um tabuleiro 3x3,
mas agora vamos adaptar para que o jogo seja NxN e o valor de N possa ser definido no momento da compilação.
Além disso, você também deve modificar o código anterior para que seja dividido em três arquivos:

campo_minado.h  (contém a assinatura das funções do seu jogo e a definição de N,  a qual será usada na definição do tabuleiro).
campo_minado.c  (contém a implementação das funções definidas no arquivo de cabeçalho e também contém a definição do tabuleiro).
main.c  (contém apenas implementação da função main do programa).
*/
