#include <stdio.h>

int main () {
    int escolha;

    printf("Escolha o número do produto a seguir: \n");
    printf("1234 - Água\n");
    printf("2345 - Refrigerante\n");
    printf("3456 - Suco\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1234: 
        printf("você escolheu água.\n");
        break;
        case 2345:
        printf("você escolheu refrigerante.\n");
        break;
        case 3456:
        printf("você escolheu suco.\n");
        break;
        default:
        printf("opção inválida!\n");
    }
    return 0;
}