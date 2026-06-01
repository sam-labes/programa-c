#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros;
    int tamanhoAlocado, i;

    printf("Quantos números você deseja inserir? ");
    scanf("%d", &tamanhoAlocado);

    // Alocação dinâmica de memória
    numeros = (int*) malloc(tamanhoAlocado * sizeof(int));

    // Verificação de alocação bem-sucedida
    if (numeros == NULL) {
        printf("Erro de alocação de memória.\n");
        return -1; // Encerra o programa com erro
    }

    // Inserção de números no array
    for (i = 0; i < tamanhoAlocado; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Exibição dos números
    printf("Você inseriu: ");
    for (i = 0; i < tamanhoAlocado; i++) {
        printf("%d", numeros[i]);
    }

    // Liberação da memória alocada
    free(numeros);
    
    return 0;
}