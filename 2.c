#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, numero;

    printf("\n#====-- CALCULADORA DE TABUADA --====#\n\n");

    printf("Numero a ser calculado...: ");
    scanf("%d", &numero);

    printf("\nTabuada do numero %d:\n\n", numero);

    for(i=1; i<11; i++){
        printf("%d * %d = ", numero, i);
        printf("%d\n", numero * i);
    }

    return 0;
}
