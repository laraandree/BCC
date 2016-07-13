#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int ordem = 0, i, j, determinante, dp=1, ds=1;
    int verifica = 1;
    while(verifica == 1){
        printf("Digite a ordem da matriz (digite 2)?");
        scanf("%d", &ordem);

        if(ordem!=0){
            int matriz[2][2];    // define a ordem digitada pelo
            for ( i = 0; i < ordem; i++){ //linha
                for ( j =0; j < ordem; j++){ //coluna
                   printf("Digite o valor da linha %d coluna %d: ", i+1 , j+1);
                   scanf("%d", &matriz[i][j]);
                }
            }
            printf("\n\n");
            printf("---------- MATRIZ ----------\n");
            for ( i = 0; i < ordem; i++){
                for( j = 0; j < ordem; j++){
                    if (i==j)
                        dp = dp * matriz[i][j];
                    if ((i+j) == 1/*ordem, mas vetor começa em zero, logo: ordem-1*/)

                        ds = ds * matriz[i][j];

                    printf("\t %d ", matriz[i][j] );
                }
                printf("\n");
            }
            printf("\n\n");

            if (ordem == 3) {
             dp = dp + (matriz[0][1] * matriz[1][2]  * matriz[2][0] ) + (matriz[0][2] * matriz[2][1] * matriz[1][0] ) ;
             ds = ds + (matriz[0][1] * matriz[1][0]  * matriz[2][2] ) + (matriz[0][0] * matriz[2][1] * matriz[1][2] ) ;
            }

            determinante = abs(dp - ds);
            printf("Determinante: |%d - %d| = %d", dp, ds, determinante);
            printf("\n\n");

            verifica = 0;
        }
        else{
            printf("Digite um valor positivo");
            verifica = 1;
        }
    }


    return 0;
}
