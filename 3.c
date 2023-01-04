#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, escolha;

    printf("\n#====--CONVERSOR PARA HEXADECIMAL E OCTAL--====#\n\n");

    printf("Insira um numero: ");
    scanf("%d", &numero);

    printf("\n\n#==-Escolha a Conversao:-==#");
    printf("\n\n[1] Hexadecimal;");
    printf("\n[2] Octal.\n\n");

    printf("Id de escolha...: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            printf("\nNumero escolhido...: %d", numero);
            printf("\nRepresentante em Hexadecimal...: %X.\n\n", numero);
        break;

        case 2:
            printf("\n\nNumero escolhido...: %d", numero);
            printf("\nRepresentante em Octal...: %o.\n\n", numero);
        break;
    }

    return 0;
}
