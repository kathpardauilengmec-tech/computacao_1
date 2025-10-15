#include <stdio.h>

#define TAM 10

float calculaMedia(int *vet, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vet[i];
    }
    return (float)soma / tamanho;
}

int main() {
    FILE *arquivo;
    int numeros[TAM];
    float media;
    char opcao;

    do {
        
        arquivo = fopen("numeros.txt", "w");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo para escrita.\n");
            return 1;
        }

        printf("Digite %d numeros inteiros:\n", TAM);
        for (int i = 0; i < TAM; i++) {
            scanf("%d", &numeros[i]);
            fprintf(arquivo, "%d\n", numeros[i]);
        }

        fclose(arquivo);

        
        arquivo = fopen("numeros.txt", "r");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo para leitura.\n");
            return 1;
        }

        for (int i = 0; i < TAM; i++) {
            fscanf(arquivo, "%d", &numeros[i]);
        }

        fclose(arquivo);

        
        printf("\nNúmeros lidos do arquivo:\n");
        for (int i = 0; i < TAM; i++) {
            printf("%d ", numeros[i]);
        }

        media = calculaMedia(numeros, TAM);
        printf("\nMédia: %.2f\n", media);

        
        printf("\nDeseja digitar novos numeros? (S/N): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's');

    return 0;
}
