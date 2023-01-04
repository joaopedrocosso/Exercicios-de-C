#include <stdio.h>
#include <stdlib.h>

int main(){

    int metros, escolha;
    float decimetros, centimetros, milimetros;

    printf("#====-- CONVERSOR DE MEDIDAS --====#");

    printf("\n\nInsira a medida em metros...: ");
    scanf("%d", &metros);

    printf("\n----PARA QUAL MEDIDA DESEJA CONVERTER?----\n\n");
    printf("[1] Decimetros\n");
    printf("[2] Centimetros\n");
    printf("[3] Milimetros\n\n");

    printf("Id de Conversao...: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            decimetros = metros * 10;
            printf("\n%d metros correspondem a %.2f decimetros.\n", metros, decimetros);
        break;

        case 2:
            centimetros = metros * 100;
            printf("\n%d metros correspondem a %.2f centimetros.\n", metros, centimetros);
        break;

        case 3:
            milimetros = metros * 1000;
            printf("\n%d metros correspondem a %.2f milimetros.\n", metros, milimetros);
        break;
    }

    return 0;
}
