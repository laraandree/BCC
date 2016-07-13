#include <stdio.h>
#include <stdlib.h>


void mostra_area(float area){
    printf("\n\nA area do retangulo eh %.2f m^2 \n\n", area);
}
float calc_area(float base, float altura){
    if( (base*altura) < 0 )
        return -1;
    else
        return (base*altura);
}

int main(){
    float base, altura, area;
    int i = 1;


    while(i == 1){
        printf("Digite o valor para altura: ");
        scanf("%f", &altura);
        printf("Digite o valor para base: ");
        scanf("%f", &base);

        if (base==altura){
            printf("Digite valores para retangulo... \n\n");
        }else{
            area = calc_area( base, altura);

            if (area != -1){
                mostra_area( area);
                i= 0;
            }else
                printf("\n\nErro -1: area negativa.\n\n");


        }

    }
     return 0;
}
